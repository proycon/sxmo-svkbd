#define KEYS 40
static Key keys[KEYS] = { NULL };

static Key keys_en[KEYS] = {
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
        { "/?", XK_slash, 1 },
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
        { "⇍ Bksp", XK_BackSpace, 2 },

        { 0 }, /* New row */
        { "↺", XK_Cancel, 1},
        { "Shft", XK_Shift_L, 1 },
        /*{ "L", XK_Left, 1 },*/
        { "↓", XK_Down, 1 },
        { "↑", XK_Up, 1 },
        /*{ "R", XK_Right, 1 },*/
        { "", XK_space, 2 },
        { "Esc", XK_Escape, 1 },
        { "Ctrl", XK_Control_L, 1 },
        /*{ "Alt", XK_Alt_L, 1 },*/
        { "↲ Enter", XK_Return, 2 },
};

#define OVERLAYS 165
static Key overlay[OVERLAYS] = {
        { 0, XK_a }, //Overlay for a
        //---
        { "à", XK_agrave },
        { "á", XK_aacute },
        { "â", XK_acircumflex },
        { "ä", XK_adiaeresis },
        { "ą", XK_aogonek },
        { "ã", XK_atilde },
        { "ā", XK_amacron },
        { "ă", XK_abreve },
        { "å", XK_aring },
        { "æ", XK_ae },
        { 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
        //--
        { 0, XK_e }, //Overlay for e
        //---
        { "è", XK_egrave },
        { "é", XK_eacute },
        { "ê", XK_ecircumflex },
        { "ë", XK_ediaeresis },
        { "ę", XK_eogonek },
        { "ē", XK_emacron },
        { "ė", XK_eabovedot },
        { 0, XK_Cancel },
        //--
        { 0, XK_y }, //New overlay
        //---
        { "ỳ", XK_ygrave },
        { "ý", XK_yacute },
        { "ŷ", XK_ycircumflex },
        { "ÿ", XK_ydiaeresis },
        { 0, XK_Cancel },
        //--
        { 0, XK_u }, //New overlay
        //---
        { "ù", XK_ugrave },
        { "ú", XK_uacute },
        { "û", XK_ucircumflex },
        { "ü", XK_udiaeresis },
        { "ų", XK_uogonek },
        { "ū", XK_umacron },
        { "ů", XK_uring},
        { "ŭ", XK_ubreve},
        { "ű", XK_udoubleacute },
        { 0, XK_Cancel },
        //--
        { 0, XK_i }, //New overlay
        //---
        { "ì", XK_igrave },
        { "í", XK_iacute },
        { "î", XK_icircumflex },
        { "ï", XK_idiaeresis },
        { "į", XK_iogonek },
        { "ī", XK_imacron },
        { "ı", XK_idotless },
        { 0, XK_Cancel },
        //--
        { 0, XK_o }, //New overlay
        //---
        { "ò", XK_ograve },
        { "ó", XK_oacute },
        { "ô", XK_ocircumflex },
        { "ö", XK_odiaeresis },
        { "ǫ", XK_ogonek },
        { "õ", XK_otilde },
        { "ō", XK_omacron },
        { "ø", XK_oslash },
        { "ő", XK_odoubleacute },
        { "œ", XK_oe },
        { 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
        //--
        { 0, XK_d }, //New overlay
        //---
        { "ď", XK_dcaron },
        { "ð", XK_eth },
        { 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
        //--
        { 0, XK_c }, //New overlay
        //---
        { "ç", XK_ccedilla },
        { "ĉ", XK_ccircumflex },
        { "č", XK_ccaron },
        { "ć", XK_cacute },
        { 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
        //--
        { 0, XK_s }, //New overlay
        //---
        { "ş", XK_scedilla },
        { "ŝ", XK_scircumflex },
        { "š", XK_scaron },
        { "ś", XK_sacute },
        { "ß", XK_ssharp },
        { 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
        //---
        { 0, XK_z }, //New overlay
        //---
        { "ž", XK_zcaron },
        { "ż", XK_zabovedot },
        { 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
        //--
        { 0, XK_n }, //New overlay
        //---
        { "ñ", XK_ntilde },
        { "ń", XK_nacute },
        { "ň", XK_ncaron },
        { 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
        //
        { 0, XK_t }, //New overlay
        //---
        { "ț", XK_tcedilla },
        { "ť", XK_tcaron },
        { "þ", XK_thorn },
        { 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
        //----
        { 0, XK_g }, //New overlay
        //---
        { "ĝ", XK_gcircumflex },
        { "ğ", XK_gbreve },
        { 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
        //
        { 0, XK_h }, //New overlay
        //---
        { "ĥ", XK_hcircumflex },
        { 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
        //
        { 0, XK_j }, //New overlay
        //---
        { "ĵ", XK_jcircumflex },
        { 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
        //--
        { 0, XK_l }, //New overlay
        //---
        { "ł", XK_lstroke },
        { "ľ", XK_lcaron },
        { 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
        //--
        { 0, XK_r }, //New overlay
        //---
        { "ř", XK_rcaron },
        { 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
		//---
        { "🙂", 0x101f642 }, //emoji overlay
        //---
        { "😀", 0x101f600 },
        { "😁", 0x101f601 },
        { "😂", 0x101f602 },
        { "😃", 0x101f603 },
        { "😄", 0x101f604 },
        { "😅", 0x101f605 },
        { "😆", 0x101f606 },
        { "😇", 0x101f607 },
        { "😈", 0x101f608 },
        { "😉", 0x101f609 },
        { "😊", 0x101f60a },
        { "😋", 0x101f60b },
        { "😌", 0x101f60c },
        { "😍", 0x101f60d },
        { "😎", 0x101f60e },
        { "😏", 0x101f60f },
        { "😐", 0x101f610 },
        { "😒", 0x101f612 },
        { "😓", 0x101f613 },
        { "😛", 0x101f61b },
        { "😮", 0x101f62e },
        { "😟", 0x101f61f },
        { "😟", 0x101f620 },
        { "😢", 0x101f622 },
        { "😭", 0x101f62d },
        { "😳", 0x101f633 },
        { "😴", 0x101f634 },
        { 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
        //--
		{ "/?", XK_slash }, //punctuation overlay
		//--
		{ "1!", XK_1, 1 },
		{ "2@", XK_2, 1 },
		{ "3#", XK_3, 1 },
		{ "4$", XK_4, 1 },
		{ "5%", XK_5, 1 },
		{ "6^", XK_6, 1 },
		{ "7&", XK_7, 1 },
		{ "8*", XK_8, 1 },
		{ "9(", XK_9, 1 },
		{ "0)", XK_0, 1 },
		{ "'\"", XK_apostrophe, 1 },
		{ "`~", XK_grave, 1 },
		{ "-_", XK_minus, 1 },
		{ "=+", XK_plus, 1 },
		{ "[{", XK_bracketleft, 1 },
		{ "]}", XK_bracketright, 1 },
		{ ",<", XK_comma, 1 },
		{ ".>", XK_period, 1 },
		{ "/?", XK_slash, 1 },
		{ "\\|", XK_backslash, 1 },
		{ "¡", XK_exclamdown, 1 },
		{ "?", XK_questiondown, 1 },
		{ "°", XK_degree, 1 },
		{ "£", XK_sterling, 1 },
		{ "€", XK_EuroSign, 1 },
		{ "¥", XK_yen, 1 },
		{ ";:", XK_colon, 1 },
        { 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
};


static Key keys_symbols[KEYS] = {
  { "1!", XK_1, 1 },
  { "2@", XK_2, 1 },
  { "3#", XK_3, 1 },
  { "4$", XK_4, 1 },
  { "5%", XK_5, 1 },
  { "6^", XK_6, 1 },
  { "7&", XK_7, 1 },
  { "8*", XK_8, 1 },
  { "9(", XK_9, 1 },
  { "0)", XK_0, 1 },

  { 0 }, /* New row */

  { "'\"", XK_apostrophe, 1 },
  { "`~", XK_grave, 1 },
  { "-_", XK_minus, 1 },
  { "=+", XK_plus, 1 },
  { "[{", XK_bracketleft, 1 },
  { "]}", XK_bracketright, 1 },
  { ",<", XK_comma, 1 },
  { ".>", XK_period, 1 },
  { "/?", XK_slash, 1 },
  { "\\|", XK_backslash, 1 },

  { 0 }, /* New row */

  { "🙂", 0x101f642, 1 },
  { "⇤", XK_Home, 1 },
  { "←", XK_Left, 1 },
  { "→", XK_Right, 1 },
  { "⇥", XK_End, 1 },
  { "⇊", XK_Next, 1 },
  { ";:", XK_colon, 1 },
  { "Tab", XK_Tab, 1 },
  { "⇍ Bksp", XK_BackSpace, 2 },

  { 0 }, /* New row */
  { "↺", XK_Cancel, 1},
  { "Shft", XK_Shift_L, 1 },
  { "↓", XK_Down, 1 },
  { "↑", XK_Up, 1 },
  { "", XK_space, 2 },
  { "Esc", XK_Escape, 1 },
  { "Ctrl", XK_Control_L, 1 },
  { "↲ Enter", XK_Return, 2 },
};

static Key keys_functions[KEYS] = {
  { "F1", XK_F1, 1 },
  { "F2", XK_F2, 1 },
  { "F3", XK_F3, 1 },
  { "F4", XK_F4, 1 },
  { "F5", XK_F5, 1 },
  { "F6", XK_F6, 1 },
  { "F7", XK_F7, 1 },
  { "F8", XK_F8, 1 },
  { "F9", XK_F9, 1 },
  { "F10", XK_F10, 1 },

  { 0 }, /* New row */

  { "⏵", XF86XK_AudioPlay, 1 },
  { "⏺", XF86XK_AudioRecord, 1 },
  { "⏹", XF86XK_AudioStop, 1 },
  { "⏮", XF86XK_AudioPrev, 1 },
  { "⏭", XF86XK_AudioNext, 1 },
  { "M", XF86XK_AudioMute, 1 },
  { "V-", XF86XK_AudioLowerVolume, 1 },
  { "V+", XF86XK_AudioRaiseVolume, 1 },
  { "B-", XF86XK_MonBrightnessDown, 1 },
  { "B+", XF86XK_MonBrightnessUp, 1 },

  { 0 }, /* New row */

  { "Del", XK_Delete, 1 },
  { "⇤", XK_Home, 1 },
  { "←", XK_Left, 1 },
  { "→", XK_Right, 1 },
  { "⇥", XK_End, 1 },
  { "⇊", XK_Next, 1 },
  { "⇈", XK_Prior, 1 },
  { "Tab", XK_Tab, 1 },
  { "⇍ Bksp", XK_BackSpace, 2 },

  { 0 }, /* New row */
  { "↺", XK_Cancel, 1},
  { "Shft", XK_Shift_L, 1 },
  { "↓", XK_Down, 1 },
  { "↑", XK_Up, 1 },
  { "", XK_space, 2 },
  { "Esc", XK_Escape, 1 },
  { "Ctrl", XK_Control_L, 1 },
  { "↲ Enter", XK_Return, 2 },
};


#define LAYERS 3
static Key* layers[LAYERS] = {
    keys_en,
    keys_symbols,
    keys_functions,
};


#define CYCLEMODKEY (KEYS - 3) //third last key (Escape)
#define CYCLEMODS 3
static Key cyclemods[CYCLEMODS] = {
  { "Esc", XK_Escape, 1 },
  { "Alt", XK_Alt_L, 1 },
  { "AGr", XK_ISO_Level3_Shift, 1 },
};


Buttonmod buttonmods[] = {
        { XK_Shift_L, Button2 },
        { XK_Alt_L, Button3 },
};

