#include "fdf.h"
void		draw_line(int x, int y1, int y2, t_fdf *fdf)
{
    while (y1 < y2)
    {
        mlx_pixel_put(fdf->new, fdf->window, y1, x, 0x000000);
        y1++;
    }
}

void 		draw_logo(t_fdf *fdf)
{

    draw_line(186, 202, 213, fdf);
    draw_line(186, 289, 300, fdf);
    draw_line(187, 202, 219, fdf);
    draw_line(187, 283, 300, fdf);
    draw_line(188, 202, 222, fdf);
    draw_line(188, 280, 300, fdf);
    draw_line(189, 202, 226, fdf);
    draw_line(189, 276, 300, fdf);
    draw_line(190, 202, 227, fdf);
    draw_line(190, 276, 300, fdf);
    draw_line(191, 203, 229, fdf);
    draw_line(191, 243, 260, fdf);
    draw_line(191, 273, 300, fdf);
    draw_line(192, 203, 232, fdf);
    draw_line(192, 238, 263, fdf);
    draw_line(192, 271, 300, fdf);
    draw_line(193, 203, 233, fdf);
    draw_line(193, 236, 263, fdf);
    draw_line(193, 270, 300, fdf);
    draw_line(194, 203, 261, fdf);
    draw_line(194, 268, 300, fdf);
    draw_line(195, 203, 261, fdf);
    draw_line(195, 267, 300, fdf);
    draw_line(196, 203, 212, fdf);
    draw_line(196, 217, 260, fdf);
    draw_line(196, 266, 283, fdf);
    draw_line(196, 290, 300, fdf);
    draw_line(197, 203, 212, fdf);
    draw_line(197, 220, 259, fdf);
    draw_line(197, 265, 281, fdf);
    draw_line(197, 290, 299, fdf);
    
    draw_line(198, 203, 213, fdf);
    draw_line(198, 220, 259, fdf);
    draw_line(198, 265, 280, fdf);
    draw_line(198, 290, 299, fdf);
    
    draw_line(199, 222, 259, fdf);
    draw_line(199, 265, 280, fdf);
    draw_line(199, 290, 299, fdf);
    draw_line(199, 203, 212, fdf);
    
    draw_line(200, 265, 278, fdf);
    draw_line(200, 290, 299, fdf);
    draw_line(200, 203, 212, fdf);
    draw_line(200, 222, 259, fdf);
    
    
    draw_line(201, 204, 213, fdf);
    draw_line(201, 221, 240, fdf);
    draw_line(201, 265, 274, fdf);
    draw_line(201, 289, 299, fdf);
    
    draw_line(202, 204, 213, fdf);
    draw_line(202, 220, 238, fdf);
    draw_line(202, 265, 274, fdf);
    draw_line(202, 289, 298, fdf);
    
    draw_line(203, 204, 214, fdf);
    draw_line(203, 219, 235, fdf);
    draw_line(203, 265, 274, fdf);
    draw_line(203, 288, 298, fdf);
    
    draw_line(204, 205, 214, fdf);
    draw_line(204, 218, 233, fdf);
    draw_line(204, 265, 274, fdf);
    draw_line(204, 288, 298, fdf);
    
    draw_line(205, 205, 215, fdf);
    draw_line(205, 217, 231, fdf);
    draw_line(205, 265, 275, fdf);
    draw_line(205, 288, 297, fdf);
    
    draw_line(206, 205, 215, fdf);
    draw_line(206, 216, 230, fdf);
    draw_line(206, 265, 275, fdf);
    draw_line(206, 288, 297, fdf);
    
    draw_line(207, 206, 228, fdf);
    draw_line(207, 266, 276, fdf);
    draw_line(207, 287, 297, fdf);
    
    draw_line(208, 206, 227, fdf);
    draw_line(208, 266, 276, fdf);
    draw_line(208, 286, 296, fdf);
    
    draw_line(209, 206, 226, fdf);
    draw_line(209, 267, 277, fdf);
    draw_line(209, 286, 296, fdf);
    
    draw_line(210, 207, 224, fdf);
    draw_line(210, 267, 278, fdf);
    draw_line(210, 286, 295, fdf);
    
    draw_line(211, 207, 224, fdf);
    draw_line(211, 268, 279, fdf);
    draw_line(211, 285, 295, fdf);
    
    draw_line(212, 208, 223, fdf);
    draw_line(212, 268, 281, fdf);
    draw_line(212, 285, 295, fdf);
    
    draw_line(212, 208, 223, fdf);
    draw_line(212, 268, 281, fdf);
    draw_line(212, 285, 295, fdf);
    
    draw_line(213, 208, 222, fdf);
    draw_line(213, 268, 294, fdf);
    
    draw_line(214, 209, 221, fdf);
    draw_line(214, 269, 294, fdf);
    
    draw_line(215, 209, 220, fdf);
    draw_line(215, 249, 259, fdf);
    draw_line(215, 270, 293, fdf);
    
    draw_line(216, 209, 220, fdf);
    draw_line(216, 247, 261, fdf);
    draw_line(216, 271, 293, fdf);
    
    draw_line(217, 208, 219, fdf);
    draw_line(217, 244, 263, fdf);
    draw_line(217, 272, 292, fdf);
    
    draw_line(218, 208, 218, fdf);
    draw_line(218, 243, 265, fdf);
    draw_line(218, 273, 292, fdf);
    
    draw_line(219, 207, 217, fdf);
    draw_line(219, 242, 265, fdf);
    draw_line(219, 275, 291, fdf);
    
    draw_line(220, 207, 217, fdf);
    draw_line(220, 241, 266, fdf);
    draw_line(220, 276, 291, fdf);
    
    draw_line(221, 206, 216, fdf);
    draw_line(221, 240, 267, fdf);
    draw_line(221, 279, 290, fdf);
    draw_line(221, 295, 296, fdf);
    
    draw_line(222, 206, 216, fdf);
    draw_line(222, 239, 267, fdf);
    draw_line(222, 281, 290, fdf);
    draw_line(222, 295, 296, fdf);
    
    draw_line(223, 206, 215, fdf);
    draw_line(223, 238, 268, fdf);
    draw_line(223, 294, 297, fdf);
    
    draw_line(224, 205, 215, fdf);
    draw_line(224, 238, 268, fdf);
    draw_line(224, 293, 297, fdf);
    
    draw_line(225, 205, 215, fdf);
    draw_line(225, 237, 252, fdf);
    draw_line(225, 256, 268, fdf);
    draw_line(225, 293, 297, fdf);
    
    draw_line(226, 205, 214, fdf);
    draw_line(226, 236, 249, fdf);
    draw_line(226, 258, 268, fdf);
    draw_line(226, 293, 298, fdf);
    
    draw_line(227, 204, 214, fdf);
    draw_line(227, 236, 249, fdf);
    draw_line(227, 258, 268, fdf);
    draw_line(227, 292, 298, fdf);
    
    draw_line(228, 204, 213, fdf);
    draw_line(228, 236, 247, fdf);
    draw_line(228, 258, 268, fdf);
    draw_line(228, 292, 299, fdf);
    
    draw_line(229, 204, 213, fdf);
    draw_line(229, 235, 247, fdf);
    draw_line(229, 258, 268, fdf);
    draw_line(229, 291, 299, fdf);
    
    draw_line(230, 204, 213, fdf);
    draw_line(230, 235, 246, fdf);
    draw_line(230, 257, 268, fdf);
    draw_line(230, 291, 299, fdf);
    
    draw_line(231, 204, 213, fdf);
    draw_line(231, 235, 245, fdf);
    draw_line(231, 256, 268, fdf);
    draw_line(231, 290, 299, fdf);
    
    draw_line(232, 203, 212, fdf);
    draw_line(232, 235, 245, fdf);
    draw_line(232, 255, 268, fdf);
    draw_line(232, 290, 299, fdf);
    
    draw_line(233, 203, 212, fdf);
    draw_line(233, 234, 245, fdf);
    draw_line(233, 252, 267, fdf);
    draw_line(233, 290, 299, fdf);
    
    draw_line(234, 203, 212, fdf);
    draw_line(234, 234, 244, fdf);
    draw_line(234, 250, 267, fdf);
    draw_line(234, 290, 299, fdf);
    
    draw_line(235, 203, 212, fdf);
    draw_line(235, 234, 266, fdf);
    draw_line(235, 291, 300, fdf);
    
    draw_line(236, 203, 212, fdf);
    draw_line(236, 234, 266, fdf);
    draw_line(236, 291, 300, fdf);
    
    draw_line(237, 203, 212, fdf);
    draw_line(237, 234, 265, fdf);
    draw_line(237, 291, 300, fdf);
    
    draw_line(238, 203, 212, fdf);
    draw_line(238, 234, 264, fdf);
    draw_line(238, 291, 300, fdf);
    
    draw_line(239, 203, 211, fdf);
    draw_line(239, 234, 263, fdf);
    draw_line(239, 291, 300, fdf);
    
    draw_line(240, 203, 211, fdf);
    draw_line(240, 234, 261, fdf);
    draw_line(240, 291, 300, fdf);
    
    draw_line(241, 291,	300, fdf);
    draw_line(242, 291,	300, fdf);
    draw_line(243, 291,	300, fdf);
    draw_line(244, 291,	300, fdf);
    draw_line(245, 291,	300, fdf);
    draw_line(246, 291,	300, fdf);
    draw_line(247, 290,	301, fdf);
    draw_line(248, 290,	299, fdf);
    draw_line(249, 261,	265, fdf);
    draw_line(249, 290,	299, fdf);
    draw_line(250, 260,	266, fdf);
    draw_line(250, 290, 299, fdf);
    draw_line(251, 257,	267, fdf);
    draw_line(251, 290,	299, fdf);
    draw_line(252, 290,	299, fdf);
    draw_line(253, 289,	299, fdf);
    draw_line(254, 289,	298, fdf);
    draw_line(255, 288,	298, fdf);
    draw_line(256, 288,	298, fdf);
    draw_line(257, 288,	297, fdf);
    draw_line(258, 287,	297, fdf);
    draw_line(259, 287,	297, fdf);
    draw_line(260, 286,	296, fdf);
    draw_line(261, 286,	296, fdf);
    
    draw_line(291, 246, 256, fdf);
    draw_line(290, 242, 261, fdf);
    draw_line(289, 237, 265, fdf);
    draw_line(288, 235, 268, fdf);
    draw_line(287, 232, 270, fdf);
    draw_line(286, 230, 272, fdf);
    draw_line(285, 228, 274, fdf);
    draw_line(284, 226, 276, fdf);
    draw_line(283, 225, 277, fdf);
    draw_line(282, 224, 279, fdf);
    
    draw_line(281, 222, 244, fdf);
    draw_line(281, 259, 280, fdf);
    
    draw_line(280, 221, 239, fdf);
    draw_line(280, 263, 282, fdf);
    
    draw_line(279, 220, 237, fdf);
    draw_line(279, 264, 283, fdf);
    
    draw_line(278, 218, 235, fdf);
    draw_line(278, 268, 284, fdf);
    
    draw_line(277, 217, 232, fdf);
    draw_line(277, 270, 285, fdf);
    
    draw_line(276,272,286, fdf);
    draw_line(276,217,231, fdf);
    
    draw_line(275, 216, 229, fdf);
    draw_line(275, 274, 287, fdf);
    draw_line(274, 215, 228, fdf);
    draw_line(274, 275, 288, fdf);
    draw_line(273, 214, 227, fdf);
    draw_line(273, 276, 289, fdf);
    draw_line(272, 213, 226, fdf);
    draw_line(272, 277, 289, fdf);
    draw_line(271, 212, 224, fdf);
    draw_line(271, 278, 290, fdf);
    draw_line(270, 212, 224, fdf);
    draw_line(270, 279, 291, fdf);
    draw_line(269, 211, 222, fdf);
    draw_line(269, 280, 292, fdf);
    draw_line(268, 210, 222, fdf);
    draw_line(268, 281, 292, fdf);
    draw_line(267, 210, 221, fdf);
    draw_line(267, 282, 293, fdf);
    draw_line(241,203,211,fdf);
    draw_line(242,203,211,fdf);
    draw_line(243,203,211,fdf);
    draw_line(244,203,212,fdf);
    draw_line(245,203,212,fdf);
    draw_line(246,203,212,fdf);
    draw_line(247,203,212,fdf);
    draw_line(248,203,212,fdf);
    draw_line(249,203,212,fdf);
    draw_line(250,204,213,fdf);
    draw_line(251,204,213,fdf);
    draw_line(252,204,213,fdf);
    draw_line(253,204,213,fdf);
    draw_line(254,204,214,fdf);
    draw_line(255,205,214,fdf);
    draw_line(256,205,215,fdf);
    draw_line(257,205,215,fdf);
    draw_line(258,206,215,fdf);
    draw_line(259,206,216,fdf);
    draw_line(260,206,216,fdf);
    draw_line(261,207,217,fdf);
    draw_line(262,207,217,fdf);
    draw_line(263,208,218,fdf);
    draw_line(264,208,218,fdf);
    draw_line(265,209,219,fdf);
    draw_line(266,209,220,fdf);
    draw_line(267,210,221,fdf);
    draw_line(268,210,222,fdf);
    draw_line(269,211,222,fdf);
    draw_line(270,212,224,fdf);
    draw_line(271,212,224,fdf);
    draw_line(272,213,226,fdf);
    draw_line(273,214,227,fdf);
    draw_line(274,215,228,fdf);
    draw_line(275,216,229,fdf);
    
    draw_line(241, 234, 261,fdf);
    draw_line(242, 234, 258,fdf);
    draw_line(243, 234, 251,fdf);
    draw_line(244, 234, 248,fdf);
    draw_line(245, 234, 246,fdf);
    draw_line(246, 233, 244,fdf);
    draw_line(247, 233, 245,fdf);
    draw_line(248, 233, 245,fdf);
    draw_line(249, 233, 246,fdf);
    draw_line(250, 234, 248,fdf);
    draw_line(251, 234, 250,fdf);
    draw_line(252, 234, 267,fdf);
    draw_line(253, 235, 268,fdf);
    draw_line(254, 236, 269,fdf);
    draw_line(255, 236, 269,fdf);
    draw_line(256, 238, 269,fdf);
    draw_line(257, 239, 268,fdf);
    draw_line(258, 240, 267,fdf);
    draw_line(259, 243, 265,fdf);
    draw_line(260, 246, 261,fdf);
    draw_line(261, 251, 248,fdf);
    draw_line(262, 286, 295,fdf);
    draw_line(263, 285, 295,fdf);
    draw_line(264, 284, 294,fdf);
    draw_line(265, 283, 294,fdf);
    draw_line(266, 283, 293,fdf);
    draw_line(267, 282, 293,fdf);
    draw_line(268, 281, 292,fdf);
    draw_line(269, 280, 292,fdf);
    draw_line(270, 279, 291,fdf);
    draw_line(271, 278, 290,fdf);
    draw_line(272, 277, 289,fdf);
    draw_line(273, 276, 289,fdf);
    draw_line(274, 275, 288,fdf);
    draw_line(275, 274, 287,fdf);
}