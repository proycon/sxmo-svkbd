static Key keys[] = {
        { 0, XK_q, 1 },
        { 0, XK_w, 1 },
        { 0, XK_e, 1 },
        { 0, XK_r, 1 },
        { 0, XK_t, 1 },
        { 0, XK_y, 1 },
        { 0, XK_u, 1 },
        { 0, XK_i, 1 },
        { 0, XK_o, 1 },
        { 0, XK_p, 1 },

        { 0 }, /* New row */


        { 0, XK_a, 1 },
        { 0, XK_s, 1 },
        { 0, XK_d, 1 },
        { 0, XK_f, 1 },
        { 0, XK_g, 1 },
        { 0, XK_h, 1 },
        { 0, XK_j, 1 },
        { 0, XK_k, 1 },
        { 0, XK_l, 1 },
        { ";:", XK_colon, 1 },
        /*{ "'", XK_apostrophe, 2 },*/

        { 0 }, /* New row */

        { 0, XK_z, 1 },
        { 0, XK_x, 1 },
        { 0, XK_c, 1 },
        { 0, XK_v, 1 },
        { 0, XK_b, 1 },
        { 0, XK_n, 1 },
        { 0, XK_m, 1 },
        /*{ "/?", XK_slash, 1 },*/
        { "Tab", XK_Tab, 1 },
        { "<-", XK_BackSpace, 2 },

        { 0 }, /* New row */
        { "Layer 2", XK_Cancel, 1},
        { "Shift", XK_Shift_L, 1 },
        /*{ "L", XK_Left, 1 },*/
        { "D", XK_Down, 1 },
        { "U", XK_Up, 1 },
        /*{ "R", XK_Right, 1 },*/
        { "", XK_space, 2 },
        { "Esc", XK_Escape, 1 },
        { "Ctrl", XK_Control_L, 1 },
        /*{ "Alt", XK_Alt_L, 1 },*/
        { "Enter", XK_Return, 2 },
};

Buttonmod buttonmods[] = {
        { XK_Shift_L, Button2 },
        { XK_Alt_L, Button3 },
};
