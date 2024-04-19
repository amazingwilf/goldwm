int
width_stbutton(Bar *bar, BarArg *a)
{
	/* return TEXTW(buttonbar); */
	return 64;
}

int
draw_stbutton(Bar *bar, BarArg *a)
{
 	drw_setscheme(drw, scheme[SchemeHidSel]);
	drw_text(drw, a->x, a->y, a->w, a->h, lrpad / 2, buttonbar, 0, False);
	return 0;
}

int
click_stbutton(Bar *bar, Arg *arg, BarArg *a)
{
	return ClkButton;
}

