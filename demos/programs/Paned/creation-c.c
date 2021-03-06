/*
 * Generated by the ICS builderXcessory (BX).
 *
 *
 * Builder Xcessory 3.0A.
 *
 */
/*
 * MOTIF include files needed for widget creation.
 */
#include <Xm/Xm.h>
#include <Xm/PushB.h>
#include <Xm/ToggleB.h>
#include <Xm/Label.h>
#include <Xm/Frame.h>
#include <Xm/Form.h>
#include <Xm/RowColumn.h>
#include <Xm/Paned.h>


/*
 * Function: BxRegisterConverters()
 *     Registers all the converters for all widgets.
 */
static void
BxRegisterConverters()
{
    XtInitializeWidgetClass(xmPushButtonWidgetClass);
    XtInitializeWidgetClass(xmToggleButtonWidgetClass);
    XtInitializeWidgetClass(xmLabelWidgetClass);
    XtInitializeWidgetClass(xmFrameWidgetClass);
    XtInitializeWidgetClass(xmFormWidgetClass);
    XtInitializeWidgetClass(xmRowColumnWidgetClass);
    XtInitializeWidgetClass(xmPanedWidgetClass);
    XtInitializeWidgetClass(topLevelShellWidgetClass);
}

/*
 * Function prototypes for routines
 * located in utilities file.
 */
extern XtPointer CONVERT();
extern void MENU_POST();


/*
 * Callback procedure declarations
 */
extern void CreateLabel();
extern void OtherResCB();
extern void ConstraintResCB();
extern void OrientChValCB();
extern void SepValChCB();
extern void QuitCB();
extern void SashValChCB();

/*
 * Function: Createpaned()
 *        Create paned hierarchy of widgets.
 */
Widget
Createpaned( parent)
Widget parent;
{
    Arg    	args[512];
    Cardinal   	argcnt;
    Boolean   	argok;
    Widget 	retval;
    Widget	paned;
    Widget	pane_form_zero;
    Widget	frame1;
    Widget	label_one;
    Widget	sash_one_tog;
    Widget	pane_form_one;
    Widget	frame2;
    Widget	label_two;
    Widget	sash_two_tog;
    Widget	pane_form_three;
    Widget	frame3;
    Widget	label_three;
    Widget	sash_three_tog;

    argok = False;

    BxRegisterConverters();

    argcnt = 0;
    paned = XtCreateWidget("paned",
		xmPanedWidgetClass,
		parent,
		args,
		argcnt);
    retval = paned;

    argcnt = 0;
    XtSetArg(args[argcnt], XmNresizePolicy, XmRESIZE_GROW); argcnt++;
    pane_form_zero = XtCreateWidget("pane_form_zero",
		xmFormWidgetClass,
		paned,
		args,
		argcnt);
    XtManageChild(pane_form_zero);

    argcnt = 0;
    XtSetArg(args[argcnt], XmNtopAttachment, XmATTACH_FORM); argcnt++;
    XtSetArg(args[argcnt], XmNbottomAttachment, XmATTACH_NONE); argcnt++;
    XtSetArg(args[argcnt], XmNleftAttachment, XmATTACH_FORM); argcnt++;
    XtSetArg(args[argcnt], XmNrightAttachment, XmATTACH_FORM); argcnt++;
    XtSetArg(args[argcnt], XmNtopOffset, 20); argcnt++;
    XtSetArg(args[argcnt], XmNbottomOffset, 0); argcnt++;
    XtSetArg(args[argcnt], XmNleftOffset, 10); argcnt++;
    XtSetArg(args[argcnt], XmNrightOffset, 9); argcnt++;
    XtSetArg(args[argcnt], XmNx, 10); argcnt++;
    sash_one_tog = XtCreateWidget("sash_one_tog",
		xmToggleButtonWidgetClass,
		pane_form_zero,
		args,
		argcnt);

    XtAddCallback(sash_one_tog, XmNvalueChangedCallback, SashValChCB, (XtPointer)0);
    XtManageChild(sash_one_tog);

    argcnt = 0;
    XtSetArg(args[argcnt], XmNleftAttachment, XmATTACH_FORM); argcnt++;
    XtSetArg(args[argcnt], XmNrightAttachment, XmATTACH_FORM); argcnt++;
    XtSetArg(args[argcnt], XmNleftOffset, 10); argcnt++;
    XtSetArg(args[argcnt], XmNrightOffset, 10); argcnt++;
    XtSetArg(args[argcnt], XmNx, 10); argcnt++;
    XtSetArg(args[argcnt], XmNy, 10); argcnt++;
    frame1 = XtCreateWidget("frame1",
		xmFrameWidgetClass,
		pane_form_zero,
		args,
		argcnt);
    XtManageChild(frame1);

    argcnt = 0;
    XtSetArg(args[argcnt], XmNx, 2); argcnt++;
    XtSetArg(args[argcnt], XmNy, 2); argcnt++;
    label_one = XtCreateWidget("label_one",
		xmLabelWidgetClass,
		frame1,
		args,
		argcnt);
    XtManageChild(label_one);

    argcnt = 0;
    XtSetArg(args[argcnt], XmNtopOffset, 20); argcnt++;
    XtSetArg(args[argcnt], XmNtopAttachment, XmATTACH_WIDGET); argcnt++;
    XtSetArg(args[argcnt], XmNtopWidget, frame1); argcnt++;
    XtSetValues(sash_one_tog, args, argcnt);

    argcnt = 0;
    XtSetArg(args[argcnt], XmNresizePolicy, XmRESIZE_GROW); argcnt++;
    pane_form_one = XtCreateWidget("pane_form_one",
		xmFormWidgetClass,
		paned,
		args,
		argcnt);
    XtManageChild(pane_form_one);

    argcnt = 0;
    XtSetArg(args[argcnt], XmNtopAttachment, XmATTACH_FORM); argcnt++;
    XtSetArg(args[argcnt], XmNbottomAttachment, XmATTACH_NONE); argcnt++;
    XtSetArg(args[argcnt], XmNleftAttachment, XmATTACH_FORM); argcnt++;
    XtSetArg(args[argcnt], XmNrightAttachment, XmATTACH_FORM); argcnt++;
    XtSetArg(args[argcnt], XmNtopOffset, 20); argcnt++;
    XtSetArg(args[argcnt], XmNbottomOffset, 0); argcnt++;
    XtSetArg(args[argcnt], XmNleftOffset, 10); argcnt++;
    XtSetArg(args[argcnt], XmNrightOffset, 10); argcnt++;
    XtSetArg(args[argcnt], XmNx, 10); argcnt++;
    sash_two_tog = XtCreateWidget("sash_two_tog",
		xmToggleButtonWidgetClass,
		pane_form_one,
		args,
		argcnt);

    XtAddCallback(sash_two_tog, XmNvalueChangedCallback, SashValChCB, (XtPointer)0);
    XtManageChild(sash_two_tog);

    argcnt = 0;
    XtSetArg(args[argcnt], XmNleftAttachment, XmATTACH_FORM); argcnt++;
    XtSetArg(args[argcnt], XmNrightAttachment, XmATTACH_FORM); argcnt++;
    XtSetArg(args[argcnt], XmNleftOffset, 11); argcnt++;
    XtSetArg(args[argcnt], XmNrightOffset, 10); argcnt++;
    XtSetArg(args[argcnt], XmNx, 11); argcnt++;
    XtSetArg(args[argcnt], XmNy, 10); argcnt++;
    frame2 = XtCreateWidget("frame2",
		xmFrameWidgetClass,
		pane_form_one,
		args,
		argcnt);
    XtManageChild(frame2);

    argcnt = 0;
    XtSetArg(args[argcnt], XmNx, 2); argcnt++;
    XtSetArg(args[argcnt], XmNy, 2); argcnt++;
    label_two = XtCreateWidget("label_two",
		xmLabelWidgetClass,
		frame2,
		args,
		argcnt);
    XtManageChild(label_two);

    argcnt = 0;
    XtSetArg(args[argcnt], XmNtopOffset, 20); argcnt++;
    XtSetArg(args[argcnt], XmNtopAttachment, XmATTACH_WIDGET); argcnt++;
    XtSetArg(args[argcnt], XmNtopWidget, frame2); argcnt++;
    XtSetValues(sash_two_tog, args, argcnt);

    argcnt = 0;
    XtSetArg(args[argcnt], XmNresizePolicy, XmRESIZE_GROW); argcnt++;
    pane_form_three = XtCreateWidget("pane_form_three",
		xmFormWidgetClass,
		paned,
		args,
		argcnt);
    XtManageChild(pane_form_three);

    argcnt = 0;
    XtSetArg(args[argcnt], XmNtopAttachment, XmATTACH_FORM); argcnt++;
    XtSetArg(args[argcnt], XmNbottomAttachment, XmATTACH_NONE); argcnt++;
    XtSetArg(args[argcnt], XmNleftAttachment, XmATTACH_FORM); argcnt++;
    XtSetArg(args[argcnt], XmNrightAttachment, XmATTACH_FORM); argcnt++;
    XtSetArg(args[argcnt], XmNtopOffset, 20); argcnt++;
    XtSetArg(args[argcnt], XmNbottomOffset, 0); argcnt++;
    XtSetArg(args[argcnt], XmNleftOffset, 10); argcnt++;
    XtSetArg(args[argcnt], XmNrightOffset, 10); argcnt++;
    XtSetArg(args[argcnt], XmNx, 10); argcnt++;
    sash_three_tog = XtCreateWidget("sash_three_tog",
		xmLabelWidgetClass,
		pane_form_three,
		args,
		argcnt);

    XtManageChild(sash_three_tog);

    argcnt = 0;
    XtSetArg(args[argcnt], XmNleftAttachment, XmATTACH_FORM); argcnt++;
    XtSetArg(args[argcnt], XmNrightAttachment, XmATTACH_FORM); argcnt++;
    XtSetArg(args[argcnt], XmNleftOffset, 10); argcnt++;
    XtSetArg(args[argcnt], XmNrightOffset, 10); argcnt++;
    XtSetArg(args[argcnt], XmNx, 10); argcnt++;
    XtSetArg(args[argcnt], XmNy, 10); argcnt++;
    frame3 = XtCreateWidget("frame3",
		xmFrameWidgetClass,
		pane_form_three,
		args,
		argcnt);
    XtManageChild(frame3);

    argcnt = 0;
    XtSetArg(args[argcnt], XmNx, 2); argcnt++;
    XtSetArg(args[argcnt], XmNy, 2); argcnt++;
    label_three = XtCreateWidget("label_three",
		xmLabelWidgetClass,
		frame3,
		args,
		argcnt);
    XtManageChild(label_three);

    argcnt = 0;
    XtSetArg(args[argcnt], XmNtopOffset, 20); argcnt++;
    XtSetArg(args[argcnt], XmNtopAttachment, XmATTACH_WIDGET); argcnt++;
    XtSetArg(args[argcnt], XmNtopWidget, frame3); argcnt++;
    XtSetValues(sash_three_tog, args, argcnt);

    return( retval );
}

/*
 * Function: Createform()
 *        Create form hierarchy of widgets.
 */
Widget
Createform( parent)
Widget parent;
{
    Arg    	args[512];
    Cardinal   	argcnt;
    Boolean   	argok;
    Widget 	retval;
    Widget	form;
    Widget	frame;
    Widget	hype_label;
    Widget	res_frame;
    Widget	res_rowcol;
    Widget	orient_rc;
    Widget	orient_label;
    Widget	horiz_tog;
    Widget	vert_tog;
    Widget	sep_rc;
    Widget	sep_label;
    Widget	sep_on_tog;
    Widget	sep_off_tog;
    Widget	other_rc;
    Widget	other_res;
    Widget	cons_res;
    Widget	quit_pb;

    argok = False;

    BxRegisterConverters();

    argcnt = 0;
    XtSetArg(args[argcnt], XmNresizePolicy, XmRESIZE_GROW); argcnt++;
    XtSetArg(args[argcnt], XmNx, 171); argcnt++;
    XtSetArg(args[argcnt], XmNy, 212); argcnt++;
    form = XtCreateWidget("form",
		xmFormWidgetClass,
		parent,
		args,
		argcnt);
    retval = form;

    argcnt = 0;
    XtSetArg(args[argcnt], XmNtopAttachment, XmATTACH_FORM); argcnt++;
    XtSetArg(args[argcnt], XmNbottomAttachment, XmATTACH_FORM); argcnt++;
    XtSetArg(args[argcnt], XmNleftAttachment, XmATTACH_FORM); argcnt++;
    XtSetArg(args[argcnt], XmNrightAttachment, XmATTACH_FORM); argcnt++;
    XtSetArg(args[argcnt], XmNtopOffset, 20); argcnt++;
    XtSetArg(args[argcnt], XmNbottomOffset, 20); argcnt++;
    XtSetArg(args[argcnt], XmNleftOffset, 1); argcnt++;
    XtSetArg(args[argcnt], XmNrightOffset, 20); argcnt++;
    res_frame = XtCreateWidget("res_frame",
		xmFrameWidgetClass,
		form,
		args,
		argcnt);
    XtManageChild(res_frame);

    argcnt = 0;
    XtSetArg(args[argcnt], XmNtopAttachment, XmATTACH_FORM); argcnt++;
    XtSetArg(args[argcnt], XmNleftAttachment, XmATTACH_FORM); argcnt++;
    XtSetArg(args[argcnt], XmNrightAttachment, XmATTACH_FORM); argcnt++;
    XtSetArg(args[argcnt], XmNtopOffset, 10); argcnt++;
    XtSetArg(args[argcnt], XmNleftOffset, 20); argcnt++;
    XtSetArg(args[argcnt], XmNrightOffset, 20); argcnt++;
    frame = XtCreateWidget("frame",
		xmFrameWidgetClass,
		form,
		args,
		argcnt);
    XtManageChild(frame);

    argcnt = 0;
    hype_label = XtCreateWidget("hype_label",
		xmLabelWidgetClass,
		frame,
		args,
		argcnt);

    CreateLabel(hype_label, (XtPointer)0, (XtPointer)0);
    XtManageChild(hype_label);

    argcnt = 0;
    XtSetArg(args[argcnt], XmNrowColumnType, XmWORK_AREA); argcnt++;
    XtSetArg(args[argcnt], XmNx, 2); argcnt++;
    XtSetArg(args[argcnt], XmNy, 2); argcnt++;
    res_rowcol = XtCreateWidget("res_rowcol",
		xmRowColumnWidgetClass,
		res_frame,
		args,
		argcnt);
    XtManageChild(res_rowcol);

    argcnt = 0;
    XtSetArg(args[argcnt], XmNorientation, XmHORIZONTAL); argcnt++;
    XtSetArg(args[argcnt], XmNpacking, XmPACK_TIGHT); argcnt++;
    XtSetArg(args[argcnt], XmNradioBehavior, True); argcnt++;
    XtSetArg(args[argcnt], XmNrowColumnType, XmWORK_AREA); argcnt++;
    orient_rc = XtCreateWidget("orient_rc",
		xmRowColumnWidgetClass,
		res_rowcol,
		args,
		argcnt);
    XtManageChild(orient_rc);

    argcnt = 0;
    XtSetArg(args[argcnt], XmNx, 3); argcnt++;
    XtSetArg(args[argcnt], XmNy, 3); argcnt++;
    orient_label = XtCreateWidget("orient_label",
		xmLabelWidgetClass,
		orient_rc,
		args,
		argcnt);
    XtManageChild(orient_label);

    argcnt = 0;
    XtSetArg(args[argcnt], XmNx, 82); argcnt++;
    XtSetArg(args[argcnt], XmNy, 3); argcnt++;
    horiz_tog = XtCreateWidget("horiz_tog",
		xmToggleButtonWidgetClass,
		orient_rc,
		args,
		argcnt);

    XtAddCallback(horiz_tog, XmNvalueChangedCallback, OrientChValCB, (XtPointer)XmHORIZONTAL);
    XtManageChild(horiz_tog);

    argcnt = 0;
    XtSetArg(args[argcnt], XmNx, 164); argcnt++;
    XtSetArg(args[argcnt], XmNy, 3); argcnt++;
    vert_tog = XtCreateWidget("vert_tog",
		xmToggleButtonWidgetClass,
		orient_rc,
		args,
		argcnt);

    XtAddCallback(vert_tog, XmNvalueChangedCallback, OrientChValCB, (XtPointer)XmVERTICAL);
    XtManageChild(vert_tog);

    argcnt = 0;
    XtSetArg(args[argcnt], XmNorientation, XmHORIZONTAL); argcnt++;
    XtSetArg(args[argcnt], XmNpacking, XmPACK_TIGHT); argcnt++;
    XtSetArg(args[argcnt], XmNradioBehavior, True); argcnt++;
    XtSetArg(args[argcnt], XmNrowColumnType, XmWORK_AREA); argcnt++;
    sep_rc = XtCreateWidget("sep_rc",
		xmRowColumnWidgetClass,
		res_rowcol,
		args,
		argcnt);
    XtManageChild(sep_rc);

    argcnt = 0;
    XtSetArg(args[argcnt], XmNx, 3); argcnt++;
    XtSetArg(args[argcnt], XmNy, 3); argcnt++;
    sep_label = XtCreateWidget("sep_label",
		xmLabelWidgetClass,
		sep_rc,
		args,
		argcnt);
    XtManageChild(sep_label);

    argcnt = 0;
    XtSetArg(args[argcnt], XmNx, 64); argcnt++;
    XtSetArg(args[argcnt], XmNy, 3); argcnt++;
    sep_on_tog = XtCreateWidget("sep_on_tog",
		xmToggleButtonWidgetClass,
		sep_rc,
		args,
		argcnt);

    XtAddCallback(sep_on_tog, XmNvalueChangedCallback, SepValChCB, (XtPointer)True);
    XtManageChild(sep_on_tog);

    argcnt = 0;
    XtSetArg(args[argcnt], XmNx, 152); argcnt++;
    XtSetArg(args[argcnt], XmNy, 3); argcnt++;
    sep_off_tog = XtCreateWidget("sep_off_tog",
		xmToggleButtonWidgetClass,
		sep_rc,
		args,
		argcnt);

    XtAddCallback(sep_off_tog, XmNvalueChangedCallback, SepValChCB, (XtPointer)False);
    XtManageChild(sep_off_tog);

    argcnt = 0;
    XtSetArg(args[argcnt], XmNorientation, XmHORIZONTAL); argcnt++;
    XtSetArg(args[argcnt], XmNrowColumnType, XmWORK_AREA); argcnt++;
    other_rc = XtCreateWidget("other_rc",
		xmRowColumnWidgetClass,
		res_rowcol,
		args,
		argcnt);
    XtManageChild(other_rc);

    argcnt = 0;
    XtSetArg(args[argcnt], XmNx, 3); argcnt++;
    XtSetArg(args[argcnt], XmNy, 3); argcnt++;
    other_res = XtCreateWidget("other_res",
		xmPushButtonWidgetClass,
		other_rc,
		args,
		argcnt);

    XtAddCallback(other_res, XmNactivateCallback, OtherResCB, (XtPointer)0);
    XtManageChild(other_res);

    argcnt = 0;
    XtSetArg(args[argcnt], XmNx, 72); argcnt++;
    XtSetArg(args[argcnt], XmNy, 3); argcnt++;
    cons_res = XtCreateWidget("cons_res",
		xmPushButtonWidgetClass,
		other_rc,
		args,
		argcnt);

    XtAddCallback(cons_res, XmNactivateCallback, ConstraintResCB, (XtPointer)0);
    XtManageChild(cons_res);

    argcnt = 0;
    XtSetArg(args[argcnt], XmNx, 135); argcnt++;
    XtSetArg(args[argcnt], XmNy, 3); argcnt++;
    quit_pb = XtCreateWidget("quit_pb",
		xmPushButtonWidgetClass,
		other_rc,
		args,
		argcnt);

    XtAddCallback(quit_pb, XmNactivateCallback, QuitCB, (XtPointer)0);
    XtManageChild(quit_pb);

    argcnt = 0;
    XtSetArg(args[argcnt], XmNtopOffset, 20); argcnt++;
    XtSetArg(args[argcnt], XmNtopAttachment, XmATTACH_WIDGET); argcnt++;
    XtSetArg(args[argcnt], XmNtopWidget, frame); argcnt++;
    XtSetArg(args[argcnt], XmNleftOffset, 1); argcnt++;
    XtSetArg(args[argcnt], XmNleftAttachment, XmATTACH_OPPOSITE_WIDGET); argcnt++;
    XtSetArg(args[argcnt], XmNleftWidget, frame); argcnt++;
    XtSetValues(res_frame, args, argcnt);

    return( retval );
}

