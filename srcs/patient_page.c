#include "fdf.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void login_page_prep(t_fdf *fdf)
{
    ft_lstdel(&(fdf->textboxes), del_textbox);
    fdf->textboxes = 0;
    ft_lstadd(&(fdf->textboxes), ft_lstnew(new_textbox("Username:\0", 50, 450, 20, 310, 250), sizeof(t_textbox)));
    ft_lstadd(&(fdf->textboxes), ft_lstnew(new_textbox("Password:\0", 50, 500, 20, 310, 250), sizeof(t_textbox)));
}

void register_page_prep(t_fdf *fdf)
{
    ft_lstdel(&(fdf->textboxes), del_textbox);
    fdf->textboxes = 0;
    ft_lstadd(&(fdf->textboxes), ft_lstnew(new_textbox("Full Name:\0",     50, 350, 20, 310, 250), sizeof(t_textbox)));
    ft_lstadd(&(fdf->textboxes), ft_lstnew(new_textbox("Age:\0",           50, 400, 20, 310, 250), sizeof(t_textbox)));
    ft_lstadd(&(fdf->textboxes), ft_lstnew(new_textbox("Government ID:\0", 50, 450, 20, 310, 250), sizeof(t_textbox)));
    ft_lstadd(&(fdf->textboxes), ft_lstnew(new_textbox("Username:\0",      50, 500, 20, 310, 250), sizeof(t_textbox)));
    ft_lstadd(&(fdf->textboxes), ft_lstnew(new_textbox("Password:\0",      50, 550, 20, 310, 250), sizeof(t_textbox)));
    fdf->new_user = (t_user *)ft_memalloc(sizeof(t_user));
}

void render_login_page(t_fdf *fdf)
{
    background_home_botton(fdf);
    render_textboxes(fdf, fdf->textboxes);
    ft_draw_box(fdf, 90, 550, 160, 575, 0x55acee);
    mlx_string_put(fdf->new, fdf->window, 100, 550, 0x000000, "Login");
    ft_draw_box(fdf, 290, 550, 390, 575, 0x55acee);
    mlx_string_put(fdf->new, fdf->window, 300, 550, 0x000000, "Register");
    draw_logo(fdf);
}

void    render_registration_page(t_fdf *fdf)
{
    background_home_botton(fdf);
    mlx_string_put(fdf->new, fdf->window, 180, 200, 0x000000, "Registration");
    mlx_string_put(fdf->new, fdf->window, 50, 300, 0x000000, "Select one:");
    mlx_string_put(fdf->new, fdf->window, 170, 300, 0x000000, "Patient");
    mlx_string_put(fdf->new, fdf->window, 270, 300, 0x000000, "Doctor");
    mlx_string_put(fdf->new, fdf->window, 350, 300, 0x000000, "Pharmacist");
    render_textboxes(fdf, fdf->textboxes);
    ft_draw_box(fdf, 190, 650, 290, 675, 0x55acee);
    mlx_string_put(fdf->new, fdf->window, 200, 650, 0x000000, "Register");
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
             
void	background_home_botton(t_fdf *fdf)
{
    int i;
    int j;
    
    i = 20;
    while (i < 460)
    {
        j = 56;
        while (j < 750)
        {
            mlx_pixel_put(fdf->new, fdf->window, i, j, 0xFFFFFF);
            j++;
        }
        i++;
    }
    ft_draw_box(fdf, 20, 56, 460, 86, 0x55ACEE);
    ft_draw_circle(fdf, 240, 775, 22, 0x4C4C4C);
}
             
void    medical_history(t_fdf *fdf)
{
    int     x;

    background_home_botton(fdf);
    mlx_string_put(fdf->new, fdf->window, 170, 100, 0x000000, "MEDICAL HISTORY");
    mlx_string_put(fdf->new, fdf->window, 50, 150, 0x000000, "LAST NAME, FIRST NAME:");
    x = 50;
    while (x < 400)
        mlx_pixel_put(fdf->new, fdf->window, x++, 200, 0x000000);
    mlx_string_put(fdf->new, fdf->window, 50, 220, 0x000000, "LAST VIST DATE (MM/DD/YY):");
    x = 310;
    while (x < 400)
        mlx_pixel_put(fdf->new, fdf->window, x++, 240, 0x000000);
    mlx_string_put(fdf->new, fdf->window, 50, 270, 0x000000, "OCCUPATION:");
    x = 160;
    while (x < 400)
        mlx_pixel_put(fdf->new, fdf->window, x++, 290, 0x000000);
    mlx_string_put(fdf->new, fdf->window, 50, 320, 0x000000, "ALLERGIES:");
    x = 150;
    while (x < 400)
        mlx_pixel_put(fdf->new, fdf->window, x++, 340, 0x000000);
    x = 50;
    while (x < 400)
        mlx_pixel_put(fdf->new, fdf->window, x++, 390, 0x000000);
    mlx_string_put(fdf->new, fdf->window, 50, 420, 0x000000, "CHRONIC HEALTH CONDITIONS:");
    x = 50;
    while (x < 400)
        mlx_pixel_put(fdf->new, fdf->window, x++, 470, 0x000000);
    x = 50;
    while (x < 400)
        mlx_pixel_put(fdf->new, fdf->window, x++, 520, 0x000000);
    ft_draw_box(fdf, 195, 580, 265, 645, 0x55acee);
    mlx_string_put(fdf->new, fdf->window, 210, 600, 0x000000, "BACK");
}
             
void login_page(t_fdf *fdf)
    {
        int i;
        
        background_home_botton(fdf);
        mlx_string_put(fdf->new, fdf->window, 50, 450, 0x000000, "Username:");
        i = 140;
        while (i < 360)
            mlx_pixel_put(fdf->new, fdf->window, i++, 470, 0x000000);
        mlx_string_put(fdf->new, fdf->window, 50, 500, 0x000000, "Password:");
        i = 140;
        while (i < 360)
            mlx_pixel_put(fdf->new, fdf->window, i++, 520, 0x000000);
        ft_draw_box(fdf, 90, 550, 160, 575, 0x55acee);
        mlx_string_put(fdf->new, fdf->window, 100, 550, 0x000000, "Login");
        ft_draw_box(fdf, 290, 550, 390, 575, 0x55acee);
        mlx_string_put(fdf->new, fdf->window, 300, 550, 0x000000, "Register");
    }
             
void    register_page(t_fdf *fdf)
{
    int     x;

    background_home_botton(fdf);
    mlx_string_put(fdf->new, fdf->window, 180, 200, 0x000000, "Registration");
    mlx_string_put(fdf->new, fdf->window, 50, 300, 0x000000, "Select one:");
    ft_draw_box(fdf, 165, 300, 245, 320, 0x008000);
    mlx_string_put(fdf->new, fdf->window, 170, 300, 0x000000, "Patient");
        mlx_string_put(fdf->new, fdf->window, 260, 300, 0x000000, "Doctor");
    mlx_string_put(fdf->new, fdf->window, 340, 300, 0x000000, "Pharmacist");
    mlx_string_put(fdf->new, fdf->window, 50, 350, 0x000000, "Full Name:");
    x = 150;
    while (x < 400)
        mlx_pixel_put(fdf->new, fdf->window, x++, 370, 0x000000);
    mlx_string_put(fdf->new, fdf->window, 50, 400, 0x000000, "Age:");
    x = 90;
    while (x < 400)
        mlx_pixel_put(fdf->new, fdf->window, x++, 420, 0x000000);
    mlx_string_put(fdf->new, fdf->window, 50, 450, 0x000000, "Government ID:");
    x = 190;
    while (x < 400)
        mlx_pixel_put(fdf->new, fdf->window, x++, 470, 0x000000);
    mlx_string_put(fdf->new, fdf->window, 50, 500, 0x000000, "Username:");
    x = 140;
    while (x < 400)
        mlx_pixel_put(fdf->new, fdf->window, x++, 520, 0x000000);
    mlx_string_put(fdf->new, fdf->window, 50, 550, 0x000000, "Password:");
    x = 140;
    while (x < 400)
        mlx_pixel_put(fdf->new, fdf->window, x++, 570, 0x000000);
    ft_draw_box(fdf, 190, 650, 290, 675, 0x55acee);
    mlx_string_put(fdf->new, fdf->window, 200, 650, 0x000000, "Register");
    // mlx_mouse_hook(fdf->window, mouse_hook, fdf);
}

void login_page_wrong_pw(t_fdf *fdf)
    {
        int i;
        
        background_home_botton(fdf);
        mlx_string_put(fdf->new, fdf->window, 50, 450, 0x000000, "Username:");
        i = 140;
        while (i < 360)
            mlx_pixel_put(fdf->new, fdf->window, i++, 470, 0x000000);
        mlx_string_put(fdf->new, fdf->window, 50, 500, 0x000000, "Password:");
        i = 140;
        while (i < 360)
            mlx_pixel_put(fdf->new, fdf->window, i++, 520, 0x000000);
        ft_draw_box(fdf, 90, 550, 160, 575, 0x55acee);
        mlx_string_put(fdf->new, fdf->window, 100, 550, 0x000000, "Login");
        ft_draw_box(fdf, 290, 550, 390, 575, 0x55acee);
        mlx_string_put(fdf->new, fdf->window, 100, 525, 0xf00000, "WRONG USERNAME/PASSWORD");
        mlx_string_put(fdf->new, fdf->window, 300, 550, 0x000000, "Register");
    }        
void    patient_login(t_fdf *fdf)
{
    background_home_botton(fdf);
    mlx_string_put(fdf->new, fdf->window, 210, 100, 0x000000, "PATIENT");
    ft_draw_box(fdf, 160, 280, 340, 345, 0x55acee);
    mlx_string_put(fdf->new, fdf->window, 180, 300, 0x000000, "MEDICAL HISTORY");
    ft_draw_box(fdf, 160, 380, 340, 445, 0x55acee);
    mlx_string_put(fdf->new, fdf->window, 190, 400, 0x000000, "APPOINTMENTS");
    ft_draw_box(fdf, 160, 480, 340, 545, 0x55acee);
    mlx_string_put(fdf->new, fdf->window, 180, 500, 0x000000, "DOCTORS NEARBY");
    ft_draw_box(fdf, 160, 580, 340, 645, 0x55acee);
    mlx_string_put(fdf->new, fdf->window, 180, 600, 0x000000, "GET MEDICATION");
}

void    patient_appointment_page(t_fdf *fdf)
{
    char    *doctor;
    char    *location;
    int     appointment;
    char    *time;

    doctor = "DR. FRANKENSTEIN";
    location = "THREE DOORS LANE";
    appointment = 0;
    time = "3:30pm";
    background_home_botton(fdf);
    mlx_string_put(fdf->new, fdf->window, 145, 100, 0x000000, "UPCOMING APPOINTMENTS");
    if (appointment == 1)
        mlx_string_put(fdf->new, fdf->window, 170, 200, 0x000000, "NO APPOINTMENTS");
    else
    {
        mlx_string_put(fdf->new, fdf->window, 110, 200, 0x000000, "DOCTOR:");
        mlx_string_put(fdf->new, fdf->window, 190, 200, 0x000000, doctor);
        mlx_string_put(fdf->new, fdf->window, 100, 230, 0x000000, "ADDRESS:");
        mlx_string_put(fdf->new, fdf->window, 190, 230, 0x000000, location);
        mlx_string_put(fdf->new, fdf->window, 130, 260, 0x000000, "TIME:");
        mlx_string_put(fdf->new, fdf->window, 190, 260, 0x000000, time);
        if (fdf->access == 1)
        {
            ft_draw_box(fdf, 150, 330, 320, 395, 0Xffffff);
            ft_draw_box(fdf, 150, 330, 320, 395, 0X008000);
            mlx_string_put(fdf->new, fdf->window, 165, 350, 0X000000, "ACCESS GRANTED");
        }
        else
        {
            ft_draw_box(fdf, 150, 330, 320, 395, 0Xffffff);
            ft_draw_box(fdf, 150, 330, 320, 395, 0Xff0000);
            mlx_string_put(fdf->new, fdf->window, 165, 350, 0X000000, "ACCESS DENIED");
        }
    }
    ft_draw_box(fdf, 195, 480, 265, 545, 0x55acee);
    mlx_string_put(fdf->new, fdf->window, 210, 500, 0x000000, "BACK");
}

void            reset_color(t_fdf *fdf)
{
    ft_draw_box(fdf, 165, 300, 245, 320, 0xffffff);
    mlx_string_put(fdf->new, fdf->window, 170, 300, 0x000000, "Patient");
    ft_draw_box(fdf, 255, 300, 325, 320, 0xFFFFff);
    mlx_string_put(fdf->new, fdf->window, 260, 300, 0x000000, "Doctor");
    ft_draw_box(fdf, 330, 300, 450, 320, 0xFFFFff);
    mlx_string_put(fdf->new, fdf->window, 340, 300, 0x000000, "Pharmacist");
}
void            access_color(t_fdf *fdf)
{
    if (fdf->access == 0)
    {
        ft_draw_box(fdf, 150, 330, 320, 395, 0Xffffff);
        ft_draw_box(fdf, 150, 330, 320, 395, 0X008000);
        mlx_string_put(fdf->new, fdf->window, 165, 350, 0X000000, "ACCESS GRANTED");
        fdf->access = 1;
    }
    else
    {
        ft_draw_box(fdf, 150, 330, 320, 395, 0Xffffff);
        ft_draw_box(fdf, 150, 330, 320, 395, 0Xff0000);
        mlx_string_put(fdf->new, fdf->window, 165, 350, 0X000000, "ACCESS DENIED");
        fdf->access = 0;
    }
}

int				mouse_hook(int button, int x, int y, t_fdf *fdf)
    {
        if (button == 1)
        {
            if (fdf->textboxes)
            {
                t_list *current;
                t_textbox *textbox;

                current = fdf->textboxes;
                if (current)
                {
                    while (current->next)
                    {
                        textbox = ((t_textbox *)current->content);
                        if (x > textbox->x_pos && x < textbox->x_pos + textbox->width &&
                            y > textbox->y_pos && y < textbox->y_pos + textbox->height)
                        {
                            textbox->infocus = 1;
                      
                        }
                        else
                        {
                            textbox->infocus = 0;
                       
                        }
                        current = current->next;
                    }
                    textbox = ((t_textbox *)current->content);
                    if (x > textbox->x_pos && x < textbox->x_pos + textbox->width &&
                        y > textbox->y_pos && y < textbox->y_pos + textbox->height)
                    {
                        textbox->infocus = 1;
                    }
                    else
                    {
                        textbox->infocus = 0;
                    }
                }
            }
            if (fdf->page == 0 || fdf->page == 3)
            {
                if (x >= 290 && x <= 390 && y >= 550 && y <= 575)
                {
                    register_page_prep(fdf);
                    mlx_clear_window(0, fdf->window);
                    render_registration_page(fdf);
                    fdf->page = 1;
                }
                if (x >= 90 && x <= 160 && y >= 550 && y <= 575)
                {
                    fdf->active_user = login(   fdf->users,
                                                ft_strdup(get_textbox_content(fdf, "Username:\0")),
												ft_strdup(get_textbox_content(fdf, "Password:\0")) );

                    fdf->page = 0;
                    ft_putstr("username: ");
                    ft_putstr(get_textbox_content(fdf, "Username:\0"));
                    ft_putstr("\n");
                    ft_putstr("password: ");
                    ft_putstr(get_textbox_content(fdf, "Password:\0"));
                    ft_putstr("\n");
                    ft_putstr("login attempt!\n");
                    if (fdf->active_user)
                    {
                        mlx_clear_window(0, fdf->window);
                        if (ft_strcmp(fdf->active_user->role, "Patient") == 0)
                        {
                            patient_login(fdf);
                            fdf->page = 2;
                        }
                        else if (ft_strcmp(fdf->active_user->role, "Doctor") == 0)
                        {
                            doctor_page(fdf);
                            fdf->page = 99;
                        }
                        else if (ft_strcmp(fdf->active_user->role, "Pharmacist") == 0)
                        {
                            pharmacist_page(fdf);
                            fdf->page = 99;
                        }
                    }
                    else
                    {
                        fdf->password = 0;
                        login_page_prep(fdf);                    
                        render_login_page(fdf);
                        fdf->page = 3;
                    }

                    //mlx_clear_window(0, fdf->window);
                    //patient_login(fdf);
                    //fdf->page = 2;
                }
                // if ( fdf->password == 0 && x >= 90 && x <= 160 && y >= 550 && y <= 575)
                // {
                //     login_page_prep(fdf);
                //     render_login_page(fdf);
                //     fdf->page = 3;
                // }

            }

        
            if ( fdf->page == 1 )
            {
                if ( x >= 190 && x <= 290 && y >= 650 && y <= 675)
                {
                    fdf->new_user = new_user(ft_strdup(get_textbox_content(fdf, "Full Name:\0")),
											 ft_strdup(get_textbox_content(fdf, "Username:\0")),
											 ft_strdup(get_textbox_content(fdf, "Password:\0")),
											 ft_strdup(fdf->user_role));
                    ft_lstadd(&(fdf->users), ft_lstnew(fdf->new_user, sizeof(t_user)));
                    fdf->page = 0;
                    ft_putstr("username: ");
                    ft_putstr(get_textbox_content(fdf, "Username:\0"));
                    ft_putstr("\n");
                    ft_putstr("password: ");
                    ft_putstr(get_textbox_content(fdf, "Password:\0"));
                    ft_putstr("\n");
                    ft_putstr("added!\n");
					mlx_clear_window(0, fdf->window);
					login_page_prep(fdf);
					render_login_page(fdf);
                }
                if ( x >= 165 && x <= 245 && y >= 300 && y <= 320)
                {
                    reset_color(fdf);
                    ft_draw_box(fdf, 165, 300, 245, 320, 0x008000);
                    mlx_string_put(fdf->new, fdf->window, 170, 300, 0x000000, "Patient");
                    //fdf->role = 1;
                    fdf->user_role = ft_strdup("Patient");

                }
                if ( x >= 255 && x <= 325 && y >= 300 && y <= 320)
                {
                    reset_color(fdf);
                    ft_draw_box(fdf, 255, 300, 325, 320, 0x008000);
                    mlx_string_put(fdf->new, fdf->window, 260, 300, 0x000000, "Doctor");
                    fdf->user_role = ft_strdup("Doctor");
                }
                if (x >= 330 && x <= 450 && y >= 300 && y <= 320)
                {
                    reset_color(fdf);
                    ft_draw_box(fdf, 330, 300, 450, 320, 0x008000);
                    mlx_string_put(fdf->new, fdf->window, 340, 300, 0x000000, "Pharmacist");
                    fdf->user_role = ft_strdup("Pharmacist");
                }
            }
            else if (fdf->page == 2)
            {
                if (x < 340 && x > 160 && y < 345 && y > 280)
                {
                    mlx_clear_window(0, fdf->window);
                    medical_history(fdf);
                    fdf->page = 11;
                }

                if (x < 340 && x > 160 && y < 445 && y > 380)
                {
                    mlx_clear_window(0, fdf->window);
                    patient_appointment_page(fdf);
                    fdf->page = 4;
                }
                if (x < 340 && x > 160 && y < 545 && y > 480)
                {
                    mlx_clear_window(0, fdf->window);
                    doctor_list(fdf);
                    fdf->page = 5;
                }
                if (x < 340 && x > 160 && y < 645 && y > 580)
                {
                    mlx_clear_window(0, fdf->window);
                    pharmacy_list(fdf);
                    fdf->page = 7;
                }
            }
            else if (fdf->page == 4)
            {
                if (x < 265 && x > 195 && y < 525 && y > 480)
                {
                    mlx_clear_window(0, fdf->window);
                    patient_login(fdf);
                    fdf->page = 2;
                }
                if (x < 300 && x > 150 && y < 395 && y > 330)
                {
                    access_color(fdf);
                }
            }
            else if (fdf->page == 5)
            {
                if (x < 210 && x > 60 && y < 507 && y > 480)
                {
                    // doctor_list_bad_rating(fdf);
                    mlx_clear_window(0, fdf->window);
                    doctor_list_bad_rating(fdf);

                    fdf->page = 6;
                }

                else if (x < 315 && x > 165 && y < 547 && y > 520)
                {
                    mlx_clear_window(0, fdf->window);
                    patient_login(fdf);
                    fdf->page = 2;
                }
                else if (x < 455 && x > 265 && y < 184 && y > 161)
                {
                    mlx_clear_window(0, fdf->window);
                    make_an_appointment(fdf);
                    if (fdf->appointment == 1)
                        modify_appointment(fdf);
                    fdf->page = 8;
                }
                
            } 
            else if (fdf->page == 6)
            {
                if (x < 210 && x > 60 && y < 507 && y > 480)
                {
                    mlx_clear_window(0, fdf->window);
                    doctor_list(fdf);
                    fdf->page = 5;
                }
                if (x < 315 && x > 165 && y < 547 && y > 520)
                {
                    mlx_clear_window(0, fdf->window);
                    patient_login(fdf);
                    fdf->page = 2;
                }
            }
            else if (fdf->page == 7)
            {
                if (x < 315 && x > 165 && y < 637 && y > 605)
                {
                    mlx_clear_window(0, fdf->window);
                    patient_login(fdf);
                    fdf->page = 2;
                }
            }
            else if (fdf->page == 8)
            {
                if (x < 315 && x > 165 && y < 547 && y > 520)
                {
                     mlx_clear_window(0, fdf->window);
                     doctor_list(fdf);
                      fdf->page = 5;
                }
                
                if (x < 455 && x > 365 && y < 184 && y > 161)
                {
                    modify_appointment(fdf);
                    fdf->appointment = 1;
                }
                
                if (fdf->appointment == 1 && x < 355 && x > 125 && y < 355 && y > 340)
                {
                    mlx_clear_window(0, fdf->window);
                    make_an_appointment(fdf);
                    fdf->appointment = 0;
                }
            }
            else if (fdf->page == 11)
            {
                if (x < 265 && x > 195 && y < 645 && y > 580)
                {
                    mlx_clear_window(0, fdf->window);
                    patient_login(fdf);
                    fdf->page = 2;
                }

            }
            if (x < 260 && x > 220 && y < 797 && y > 743)
            {
                fdf->active_user = NULL;
                mlx_clear_window(0, fdf->window);
                login_page_prep(fdf);
                render_login_page(fdf);
                fdf->page = 0;
            }
         }
        
        if (button == 2)
            fdf->password = 1;
        return (0);
    }
        

        int			main(int ar, char **av)
    {
        t_fdf	*fdf;
        (void)av;
        (void)ar;
        fdf = (t_fdf*)malloc(sizeof(t_fdf) * 1);
        fdf->new = mlx_init();
        fdf->window = mlx_new_window(fdf->new, 480, 800, "Evil Corp");
        fdf->password = -99;
        fdf->access = 0;
        fdf->appointment = 0;

        login_page_prep(fdf);

        render_login_page(fdf);
    

        mlx_key_hook(fdf->window, key_hook, fdf);
        //login_page(fdf); //Login Screen
        mlx_mouse_hook(fdf->window, mouse_hook, fdf);
    
        
        mlx_loop(fdf->new);
        return (0);
    }