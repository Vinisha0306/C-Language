#include<stdio.h>
#include<conio.h>
#define p printf

main()
{
  int choice;

  clrscr();

  p("Enter....\n");
  p("1) Press 1 for English\n");
  p("2) Press 2 for Hindi\n");
  p("3) Prees 3 for Gujarati\n");
  p("Enter your choice:");
  scanf("%d",&choice);

  switch(choice)
  {
    case 1:
	p("Enter...\n");
	p("1) Press 1 for internet Recharge\n");
	p("2) Press 2 for Top-up Recharge\n");
	p("3) Press 3 for Special Recharge\n");
	p("Enter Your choice:");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			p("You have successfully done internet Recharge\n");
			break;

		case 2:
			p("You have successfully done Top-up Recharge\n");
			break;

		case 3:
			p("You have successfully done Special Recharge\n");
			break;

		default:
			p("Invild");
			break;
	}
	break;

	case 2:

	p("Enter...\n");
	p("1) internet Recharge keyliye 1 dabaye\n");
	p("2) Top-up Recharge keyliye 2 dabaye\n");
	p("3) Special Recharge keyliye 3 dabaye\n");
	p("Enter Your choice:");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			p("Aapne safaltapurvak internet Recharge kar liya he.\n");
			break;

		case 2:
			p("Aapne safaltapurvak Top-up Recharge kar liya he.\n");
			break;

		case 3:
			p("Aapne safaltapurvak Special Recharge kar liya he.\n");
			break;

		default:
			p("Invild");
			break;
	}
	break;

	case 3:
	p("Enter...\n");
	p("1) internet Recharge mate 1 Dabavo\n");
	p("2) Top-up Recharge mate 2 Dabavo\n");
	p("3) Special Recharge mate 3 Dabavo\n");
	p("Enter Your choice:");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			p("Tame safaltapurvak internet Recharge karyu chhe.\n");
			break;

		case 2:
			p("Tame safaltapurvak Top-up Recharge karyu chhe.\n");
			break;

		case 3:
			p("Tame safaltapurvak Special Recharge karyu chhe.\n");
			break;

		default:
			p("Invild");
			break;
	}

	break;

	default:
		p("invild");
  }
  getch();
}