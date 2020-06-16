/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchieko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 15:51:59 by cchieko           #+#    #+#             */
/*   Updated: 2019/12/20 15:54:28 by cchieko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_FT_LS_H
# define FT_LS_FT_LS_H

# include "../libft/libft.h"
# include <time.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <dirent.h>
# include <pwd.h>
# include <grp.h>
# include <sys/xattr.h>
# include <sys/acl.h>
# include <sys/ioctl.h>
# define SECONDS_AT_HALF_YEAR 15778463
# define ERROR_MSG "Memory Allocation error!"

typedef struct		s_file_stats
{
	char			*name;
	char			*path;
	char			file_type;
	char			*link;
	char			*permissions;
	long			link_count;
	char			*user;
	char			*group;
	int				minor;
	int				major;
	long long		file_size;
	long long		blocks_allocated;
	time_t			last_modification;
}					t_file_stats;

typedef struct		s_dnode
{
	t_file_stats	*dir_stats;
	t_list			*f_list;
}					t_dnode;

typedef struct		s_wlists
{
	t_list			*dir_list;
	t_list			*file_list;
	t_list			*nonexistent_list;
}					t_wlists;

void				free_dnode_list(t_list **list);
void				free_file_obj(t_file_stats **file_stat);
void				free_wlists(t_wlists *wlists);

# define RED		"\x1B[31m"
# define GRN		"\x1B[32m"
# define YEL		"\x1B[33m"
# define BLU		"\x1B[34m"
# define MAG		"\x1B[35m"
# define CYN		"\x1B[36m"
# define WHT		"\x1B[37m"
# define RESET		"\x1B[0m"

void				set_output_color(char file_type);

typedef struct		s_mc_list
{
	int				columns;
	int				rows;
	int				lst_len;
	int				lm;
	int				max;
}					t_mc_list;

void				print_multi_column(t_wlists *wlists, char *flags);
void				print_multi_column_dlist(t_list *dlist, char *flags,
					int col, int unique_dir);

typedef struct		s_column_width
{
	int				lc_width;
	int				uid_width;
	int				group_width;
	int				fs_width;
	int				longest_major;
}					t_column_width;

void				fill_c_widths(t_list *f_list, t_column_width *cwidths);
void				print_nonexistent(t_list *list);
void				ft_perror(char *str);

void				print_stats(t_wlists *wlists, char *flags);
void				print_dir_content(t_list *dir_list, int format,
					int with_title, char *flags);

void				print_total(t_list *f_list);
void				print_last_modification(time_t lm);
void				print_formatted_list(t_list *list,
					t_column_width *cwidths, char *flags);

void				main_action(char ***files, char **flags);
char				*get_filename(char *path);

void				process_dir(char *dirpath, char *flags, t_wlists *wlists);
void				create_and_append_dnode(t_dnode *new_dnode,
					t_list *new_node, t_wlists *wlists, t_file_stats *dir);

# define ERR_USAGE "usage: ft_ls [-1AGSRaglort] [file ...]"

void				crush_and_error(char *error_msg, char ***file_list,
									char **flags);
void				display_usage_err(char *invalid_flag_args);
void				set_errno_to_nsfod(char *filename);
void				set_errno_to_nopermission(char *dirname);

int					fill_file_stat(t_file_stats **file_stat,
					struct stat file_info);
void				init_wlists(t_wlists *wlists);
t_file_stats		*new_file_stat(char *path, char *name);

void				add_files_from_argv(char ***file_list, char **flags,
										char **argv, int argc);
int					add_current_dir(char ***file_list);

int					is_dir(char *filename);
int					is_hidden(char *filename);
int					is_nonexistent(t_list *node);

void				add_flags(char **flags, char **argv);

void				check_sort_flags(char **flags, char c);
void				check_display_flags(char **flags, char c);

int					are_flags_correct(char **argv, int argc);
int					valid_flags(const char *flags);

void				free_input(char ***file_list, char **flags);

char				*get_file_permissions(mode_t st_mode, char *filename);

void				recursive_lookthrough(t_file_stats *dir, char *flags);
void				single_stream_recursion(t_list *f_list, char *flags);
void				multi_stream_recursion(t_wlists *wlists, char *flags);

void				sort_w_list(t_list **list, int ascending,
					int (*cmp)(t_list *, t_list *, int, int), int is_dir);
void				sort(t_wlists *wlists, char *flags);

int					compare_name(t_list *node1, t_list *node2,
					int ascending, int is_dir);
int					compare_time(t_list *node1, t_list *node2,
					int ascending, int is_dir);
int					compare_size(t_list *node1, t_list *node2,
					int ascending, int is_dir);

int					get_terminal_width();
int					get_max_filename_length(t_list *list);
int					get_lm(int n);

t_list				*get_file_stat(char *filename, char *flags, int isarg);
t_list				*get_dir_stat(char *dirname, char *flags);
char				*append_path(char *firstpath, char *secondpath);

#endif
