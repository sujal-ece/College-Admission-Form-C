#include <stdio.h>
#include <string.h>

int main()
{
    char f[20];                          // field name
    char gc;                             // Guardian Choice
    char ascc;                           // Additional Subjects for Commerce choice
    char ASC[20];                        // Additional Subject for Commerce (name)
    char sfn[30];                        // Student's First Name
    char smn[30];                        // Student's Middle Name
    char sln[30];                        // Student's Last Name
    char fn[30];                         // Student's Father's Name
    char mn[30];                         // Student's Mother's Name
    char gn[30];                         // Student's Mother's Name
    char sal1[100];                      // Student's Address line 1
    char sal2[100];                      // Student's Address line 2
    char pal1[100];                      // Student's Parent's Address line 1
    char pal2[100];                      // Student's Parent's Address line 2
    char gal1[100];                      // Student's Guardian's Address line 1
    char gal2[100];                      // Student's Guardian's Address line 2
    char sg[20];                         // Student's Gender
    char BG[5];                          // Student's Blood Group
    char grws[30];                       // Guardian's Relation with Student
    char fq[30];                         // Father's Qualification
    char fo[30];                         // Father's Occupation
    char mq[30];                         // Mother's Qualification
    char mo[30];                         // Mother's Occupation
    char stream[16];                     // Stream
    char sgroup[3];                      // Science Group in 12th standard
    char dn[100];                        // Student's Degree Name
    char sn[100];                        // Student's Specialisation Name
    char email[100];                     // Student's Email address
    int age;                             // Student's Age
    int d, m, y;                         // Student's Date of Birth
    int pc;                              // Previous Class
    int phym, chemm, mathm, biom;        // Science Stream Marks
    int accm, ocmm, ecom, statm, Cmathm; // Commerce Stream Marks
    int psym, sociom, geom, gujm;        // Arts Stream Marks
    int engm, compm;                     // Commonn Subjects
    int totalm;                          // Total Marks
    int dc;                              // Degree Choice
    int spc;                             // Specialization Choice
    int obtm;                            // Student's Obtained Marks
    float obtp;                          // Student's Obtained Percentage
    long int AFI;                        // Annual Family Income
    long long int spn;                   // Student's Phone number
    long long int fpn;                   // Student's Father's Phone number
    long long int mpn;                   // Student's Mother's Phone number
    long long int pwn;                   // Parent's Whatsapp number
    long long int gpn;                   // Student's Guardian's number(if any)
    long long int gwn;                   // Student's Guardian's Whatsapp number(if any)

    printf("\n");
    printf("Welcome to ABC College of Engineering and Management\n");
    printf("\n");
    printf("Apply  for Admission 2026-2027 Academic batch\n");

    printf("\n");

    // Personal Details Section
    printf("-----------------------------------------------------\n");
    printf("---------------Enter Personal Details----------------\n");
    printf("-----------------------------------------------------\n");

    printf("\n");

    printf("Enter Your First Name   : ");
    fgets(sfn, sizeof(sfn), stdin);
    sfn[strcspn(sfn, "\n")] = '\0';

    printf("Enter Your Middle Name  : ");
    fgets(smn, sizeof(smn), stdin);
    smn[strcspn(smn, "\n")] = '\0';

    printf("Enter Your Last Name    : ");
    fgets(sln, sizeof(sln), stdin);
    sln[strcspn(sln, "\n")] = '\0';

    printf("Enter Your Age          : ");
    scanf("%d", &age);

    printf("Enter Your -----Date of Birth-----\n");
    printf("                  Date  : ");
    scanf("%d", &d);
    printf("                 Month  : ");
    scanf("%d", &m);
    printf("                  Year  : ");
    scanf("%d", &y);
    printf("           -----------------------\n");

    printf("Enter your Phone Number : ");
    scanf("%lld", &spn);

    getchar();

    printf("Enter Your Address      : \n");
    printf("Address Line 1          : ");
    fgets(sal1, sizeof(sal1), stdin);
    sal1[strcspn(sal1, "\n")] = '\0';
    printf("Address Line 2          : ");
    fgets(sal2, sizeof(sal2), stdin);
    sal2[strcspn(sal2, "\n")] = '\0';

    printf("                 Gender : ");
    fgets(sg, sizeof(sg), stdin);
    sg[strcspn(sg, "\n")] = '\0';
    printf("            Blood Group : ");
    fgets(BG, sizeof(BG), stdin);
    BG[strcspn(BG, "\n")] = '\0';

    printf("\n");
    // Parent's Details Section

    printf("-----------------------------------------------------\n");
    printf("---------------Enter Parent's Details----------------\n");
    printf("-----------------------------------------------------\n");

    printf("\n");

    printf("Enter Father's Name   : ");
    fgets(fn, sizeof(fn), stdin);
    fn[strcspn(fn, "\n")] = '\0';

    printf("Enter Father's Phone Number : ");
    scanf("%lld", &fpn);
    getchar();

    printf("Enter Mother's Name   : ");
    fgets(mn, sizeof(mn), stdin);
    mn[strcspn(mn, "\n")] = '\0';

    printf("Enter Mother's Phone Number : ");
    scanf("%lld", &mpn);

    printf("Enter Parent's Whatsapp number : ");
    scanf("%lld", &pwn);
    getchar();

    printf("Enter Your Parent's Address      : \n");
    printf("In case it's same as student's address enter '-'. \n");
    printf("Address Line 1          : ");
    fgets(pal1, sizeof(pal1), stdin);
    pal1[strcspn(pal1, "\n")] = '\0';
    printf("Address Line 2          : ");
    fgets(pal2, sizeof(pal2), stdin);
    pal2[strcspn(pal2, "\n")] = '\0';

    printf("\n");

    printf("---------------------------------------------------------------\n");
    printf("Do you happen to have any Guardian other than Parents? (Y/N): ");
    scanf(" %c", &gc);
    getchar();
    printf("---------------------------------------------------------------\n");

    printf("\n");

    if (gc == 'Y' || gc == 'y')
    {

        printf("\n");

        printf("-------------------------------------------------------\n");
        printf("---------------Enter Guardian's Details----------------\n");
        printf("-------------------------------------------------------\n");

        printf("Enter Guardian's Name   : ");
        fgets(gn, sizeof(gn), stdin);
        gn[strcspn(gn, "\n")] = '\0';

        printf("Enter Guardian's Phone Number : ");
        scanf("%lld", &gpn);
        getchar();

        printf("What is Guardian's Relation with Student? : ");
        fgets(grws, sizeof(grws), stdin);
        grws[strcspn(grws, "\n")] = '\0';

        printf("Enter Guardian's Address      : \n");
        printf("In case it's same as student's address enter '-'. \n");
        printf("Address Line 1          : ");
        fgets(gal1, sizeof(gal1), stdin);
        gal1[strcspn(gal1, "\n")] = '\0';
        printf("Address Line 2          : ");
        fgets(gal2, sizeof(gal2), stdin);
        gal2[strcspn(gal2, "\n")] = '\0';

        printf("-----------------------------------------------------\n");

        printf("\n");
    }

    printf("-------------------------------------------------\n");
    printf("---------------Some Other Details----------------\n");
    printf("-------------------------------------------------\n");

    printf("\n");

    printf("Father's Qualification : ");
    fgets(fq, sizeof(fq), stdin);
    fq[strcspn(fq, "\n")] = '\0';

    printf("Father's Occupation : ");
    fgets(fo, sizeof(fo), stdin);
    fo[strcspn(fo, "\n")] = '\0';

    printf("Mother's Qualification : ");
    fgets(mq, sizeof(mq), stdin);
    mq[strcspn(mq, "\n")] = '\0';

    printf("Mother's Occupation : ");
    fgets(mo, sizeof(mo), stdin);
    mo[strcspn(mo, "\n")] = '\0';

    printf("Annual Family Income : ");
    scanf("%ld", &AFI);
    getchar();

    printf("-------------------------------------------------\n");

    printf("\n");

    printf("---------------------------------------------------------------\n");
    printf("---------------Qualification/Educational Detail----------------\n");
    printf("---------------------------------------------------------------\n");

    printf("\n");

    printf("Enter Previous Class : ");
    scanf("%d", &pc);
    getchar();

    if (pc == 12)
    {
        printf("Enter Your Stream : ");
        fgets(stream, sizeof(stream), stdin);
        stream[strcspn(stream, "\n")] = '\0';

        printf("\n");

        if (strcmp(stream, "Science") == 0)
        {
            printf("Which Group where you in? (A/B/AB): ");
            fgets(sgroup, sizeof(sgroup), stdin);
            sgroup[strcspn(sgroup, "\n")] = '\0';

            printf("\n");

            printf("-:-:-:-:-:-:- Fill Below details According to Marksheet -:-:-:-:-:-:-\n");

            printf("\n");

            printf("Enter Obtained marks in Physics (out of 100)     : ");
            scanf("%d", &phym);

            printf("Enter Obtained marks in Chemistry (out of 100)   : ");
            scanf("%d", &chemm);

            if (strcmp(sgroup, "A") == 0)
            {
                printf("Enter Obtained marks in Mathematics (out of 100) : ");
                scanf("%d", &mathm);

                biom = 0;
                totalm = 500;
            }
            else if (strcmp(sgroup, "B") == 0)
            {
                printf("Enter Obtained marks in Biology (out of 100)     : ");
                scanf("%d", &biom);

                mathm = 0;
                totalm = 500;
            }
            else if (strcmp(sgroup, "AB") == 0)
            {
                printf("Enter Obtained marks in Mathematics (out of 100) : ");
                scanf("%d", &mathm);

                printf("Enter Obtained marks in Biology (out of 100)     : ");
                scanf("%d", &biom);

                totalm = 600;
            }
            else
            {
                printf("You can choice either A, B or AB!!");
                return 0;
            }

            printf("Enter Obtained marks in English (out of 100)     : ");
            scanf("%d", &engm);

            printf("Enter Obtained marks in Computer (out of 100)    : ");
            scanf("%d", &compm);
        }

        else if (strcmp(stream, "Commerce") == 0)
        {
            printf("-:-:-:-:-:-:- Fill Below details According to Marksheet -:-:-:-:-:-:-\n");

            printf("Enter Obtained marks in Accountancy (out of 100) : ");
            scanf("%d", &accm);

            printf("Enter Obtained marks in OCM (out of 100)         : ");
            scanf("%d", &ocmm);

            printf("Enter Obtained marks in Economics (out of 100)   : ");
            scanf("%d", &ecom);

            printf("Enter Obtained marks in Statistics (out of 100)  : ");
            scanf("%d", &statm);

            printf("Enter Obtained marks in English (out of 100)     : ");
            scanf("%d", &engm);

            printf("\n");

            printf("Do you have any electives or Aditional Subjects? (Y/N) : ");
            scanf(" %c", &ascc);
            getchar();

            printf("\n");

            if (ascc == 'Y' || ascc == 'y')
            {
                printf("Which was it? Computer, Mathematics, or Both? : ");
                fgets(ASC, sizeof(ASC), stdin);
                ASC[strcspn(ASC, "\n")] = '\0';

                printf("\n");

                if (strcmp(ASC, "Computer") == 0)
                {
                    printf("Enter Obtained marks in Computer (out of 100)    : ");
                    scanf("%d", &compm);

                    Cmathm = 0;
                    totalm = 600;
                }
                else if (strcmp(ASC, "Mathematics") == 0)
                {
                    printf("Enter Obtained marks in Mathematics (out of 100) : ");
                    scanf("%d", &Cmathm);

                    compm = 0;
                    totalm = 600;
                }
                else if (strcmp(ASC, "Both") == 0)
                {
                    printf("Enter Obtained marks in Computer (out of 100)    : ");
                    scanf("%d", &compm);
                    printf("Enter Obtained marks in Mathematics (out of 100) : ");
                    scanf("%d", &Cmathm);

                    totalm = 700;
                }
                else
                {
                    printf("You had only 3 choice either 'Computer' or 'Mathematics' or 'Both'.");
                    return 0;
                }
            }
            else
            {
                compm = 0;
                gujm = 0;
                totalm = 500;
            }
        }

        else if (strcmp(stream, "Arts") == 0 || strcmp(stream, "Humanities") == 0)
        {
            printf("-:-:-:-:-:-:- Fill Below details According to Marksheet -:-:-:-:-:-:-\n");

            printf("\n");

            printf("Enter Obtained marks in Economics (out of 100)  : ");
            scanf("%d", &ecom);

            printf("Enter Obtained marks in Psychology (out of 100) : ");
            scanf("%d", &psym);

            printf("Enter Obtained marks in Sociology (out of 100)  : ");
            scanf("%d", &sociom);

            printf("Enter Obtained marks in Geography (out of 100)  : ");
            scanf("%d", &geom);

            printf("Enter Obtained marks in English (out of 100)    : ");
            scanf("%d", &engm);

            printf("Do you have any electives or Aditional Subjects? (Y/N) : ");
            scanf(" %c", &ascc);
            getchar();

            printf("\n");

            if (ascc == 'Y')
            {
                printf("Which was it? Computer? Gujarati? or Both? : ");
                fgets(ASC, sizeof(ASC), stdin);
                ASC[strcspn(ASC, "\n")] = '\0';

                printf("\n");

                if (strcmp(ASC, "Computer") == 0)
                {
                    printf("Enter Obtained marks in Computer (out of 100)   : ");
                    scanf("%d", &compm);

                    gujm = 0;
                    totalm = 600;
                }
                else if (strcmp(ASC, "Gujarati") == 0)
                {
                    printf("Enter Obtained marks in Gujarati (out of 100)   : ");
                    scanf("%d", &gujm);

                    compm = 0;
                    totalm = 600;
                }
                else if (strcmp(ASC, "Both") == 0)
                {
                    printf("Enter Obtained marks in Computer (out of 100)   : ");
                    scanf("%d", &compm);
                    printf("Enter Obtained marks in Gujarati (out of 100)   : ");
                    scanf("%d", &gujm);

                    totalm = 700;
                }
                else
                {
                    printf("You had only 3 choice either 'Computer' or 'Gujarati' or 'Both'.");

                    totalm = 500;
                }
            }
            else
            {
                compm = 0;
                gujm = 0;
                totalm = 500;
            }
        }

        else
        {
            printf("The form is for Homo Sapiens, Literate!!!!\n");
            return 0;
        }

        printf("---------------------------------------------------------------\n");
    }

    else
    {
        printf("We Only offer Degree Courses\n");
        return 0;
    }

    printf("\n");

    if (strcmp(stream, "Science") == 0 && ((strcmp(sgroup, "A") == 0 || strcmp(sgroup, "AB") == 0)))
    {
        printf("You can apply for Engineering or Management at our ABC Institute of Engineering and Management\n");

        getchar();

        printf("\n");

        printf("Tell us Which Field are you Interested in?? Engineering or Management? : ");
        fgets(f, sizeof(f), stdin);
        f[strcspn(f, "\n")] = '\0';

        printf("\n");
    }

    else if (strcmp(stream, "Science") == 0 || strcmp(stream, "Commerce") == 0 || strcmp(stream, "Arts") == 0 || strcmp(stream, "Humanities") == 0)
    {
        printf("You can Apply for Best Management Courses at our ABC Institute of Engineering and Management\n");
        strcpy(f, "Management");

        printf("\n");
    }

    if (strcmp(f, "Engineering") == 0)
    {
        printf("We offer following Degrees in Engineering : \n");
        printf("      |\n");
        printf("      |\n");
        printf("[1] B. Tech (Bachelor of Technology - Modern & Specialised Tech)\n");
        printf("[2] B.E. (Bachelor of Engineering - Core & Infrastructure Tech)\n");

        printf("\n");

        printf("Select Degree you want to Pursue : ");
        scanf("%d", &dc);
        getchar();

        printf("\n");

        switch (dc)
        {
        case 1:
            strcpy(dn, "Bachelor of Technology");
            break;

        case 2:
            strcpy(dn, "Bachelor Engineer");
            break;
        }

        printf("We offer following Specializations in Engineering field : \n");
        printf("      |\n");
        printf("      |\n");
        printf("[1] Computer Science Engineering (CSE)\n");
        printf("[2] Artificial Intelligence and Machine Learning (AI/ML)\n");
        printf("[3] Computer Engineering (CE)\n");
        printf("[4] Information and Communication Technology (ICT)\n");
        printf("[5] Electrical Engineering (EE)\n");
        printf("[6] Electronics and Communications Engineering (EC)\n");
        printf("[7] Civil Engineering\n");
        printf("[8] Mechanical Engineering\n");
        printf("[9] Automobile Engineering\n");
        printf("[10] Chemical Engineering\n");

        printf("\n");

        printf("Select Specialization you want to do in : ");
        scanf("%d", &spc);
        getchar();

        switch (spc)
        {
        case 1:
            strcpy(sn, "Computer Science Engineering (CSE)");
            break;

        case 2:
            strcpy(sn, "Artificial Intelligence and Machine Learning (AI/ML)");
            break;

        case 3:
            strcpy(sn, "Computer Engineering (CE)");
            break;

        case 4:
            strcpy(sn, "Information and Communication Technology (ICT)");
            break;

        case 5:
            strcpy(sn, "Electrical Engineering (EE)");
            break;

        case 6:
            strcpy(sn, "Electronics and Communications Engineering (EC)");
            break;

        case 7:
            strcpy(sn, "Civil Engineering");
            break;

        case 8:
            strcpy(sn, "Mechanical Engineering");
            break;

        case 9:
            strcpy(sn, "Automobile Engineering");
            break;

        case 10:
            strcpy(sn, "Chemical Engineering");
            break;

        default:
            break;
        }
    }

    else if (strcmp(f, "Management") == 0)
    {
        printf("We offer following Degrees in Management : \n");
        printf("      |\n");
        printf("      |\n");
        printf("[1] BBA (Bachelor of Business Administration)\n");
        printf("[2] BMS (Bachelor of Management Studies)\n");
        printf("[3] Integrated MBA (5-Year Dual Degree - Direct Corporate Track)\n");

        printf("\n");

        printf("Select Degree you want to Pursue : ");
        scanf("%d", &dc);
        getchar();

        printf("\n");

        switch (dc)
        {
        case 1:
            strcpy(dn, "Bachelor of Business Admistration (BBA)");
            break;

        case 2:
            strcpy(dn, "Bachelor of Management (BMS)");
            break;

        case 3:
            strcpy(dn, "Integrated MBA (5-Year Dual Degree - Direct Corporate Track)");
            break;

        default:
            break;
        }

        if (dc == 1)
        {
            printf("We offer following Specialization in BBA degree : \n");
            printf("      |\n");
            printf("      |\n");
            printf("[1] Human Resource Management (HRM)\n");
            printf("[2] Marketing and Digital Sales\n");
            printf("[3] Banking & Finance\n");
            printf("[4] Foreign Trade / International Business\n");

            printf("\n");
            printf("Select Specialization you want to do in : ");
            scanf("%d", &spc);
            getchar();
            printf("\n");

            switch (spc)
            {
            case 1:
                strcpy(sn, "Human Resource Management(HRM)");
                break;

            case 2:
                strcpy(sn, "Marketing and Digital Sales");
                break;

            case 3:
                strcpy(sn, "Banking & Finance");
                break;

            case 4:
                strcpy(sn, "Foreign Trade / International Business");
                break;

            default:
                break;
            }
        }

        if (dc == 2)
        {
            printf("We offer following Specialization in BMS degree : \n");
            printf("      |\n");
            printf("      |\n");
            printf("[1] Supply Chain and Logistic Management\n");
            printf("[2] Aviation and Airport Management\n");
            printf("[3] E-Commerce and Retail Management\n");
            printf("[4] Hospitality and Tourism Managment\n");

            printf("\n");

            printf("Select Specialization you want to do in : ");
            scanf("%d", &spc);
            getchar();

            printf("\n");

            switch (spc)
            {
            case 1:
                strcpy(sn, "Supply Chain and Logistic Management");
                break;

            case 2:
                strcpy(sn, "Aviation and Airport Management");
                break;

            case 3:
                strcpy(sn, "E-Commerce and Retail Management");
                break;

            case 4:
                strcpy(sn, "Hospitality and Tourism Managment");
                break;

            default:
                break;
            }
        }

        if (dc == 3)
        {
            printf("We offer following Specialization in Integrated MBA degree : \n");
            printf("      |\n");
            printf("      |\n");
            printf("[1] Business Analytics\n");
            printf("[2] Strategic Management\n");
            printf("[3] Financial Markets & Investment Banking\n");

            printf("\n");

            printf("Select Specialization you want to do in : ");
            scanf("%d", &spc);
            getchar();

            printf("\n");

            switch (spc)
            {
            case 1:
                strcpy(sn, "Business Analytics");
                break;

            case 2:
                strcpy(sn, "Strategic Management");
                break;

            case 3:
                strcpy(sn, "Financial Markets & Investment Banking");
                break;

            default:
                break;
            }
        }
    }

    printf("----------------------------------------------------------------------------------------\n");

    printf("\n");
    printf("Please Provide Email Address and Click Enter to Submit the Form. \n");
    printf("\n");
    printf("Enter your Email Address : ");
    fgets(email, sizeof(email), stdin);
    printf("----------------------------------------------------------------------------------------\n");
    printf("\n");
    printf("Thanks Dear %s. We will notify and update your admission process status to you on %s.\n", sfn, email);
    printf("\n");
    printf("Wait for a while, till our automated system processes your admission form.... \n");
    printf("\n");

    printf("----------------------------------------------------------------------------------------\n");
    printf("Result : \n");

    printf("                            ------------------------------                             \n");
    printf("----------------------------| Provisional Admission Form |-----------------------------\n");
    printf("|                           ------------------------------                            |\n");
    printf("|                                                                                     |\n");
    printf("|-------------------------------------------------------------------------------------|\n");
    printf("|                                  Student's Details                                  |\n");
    printf("|-------------------------------------------------------------------------------------|\n");
    printf("|                                                                                     |\n");
    printf("| Full name : %s %s %s                                                              |\n", sfn, smn, sln);
    printf("| DOB       : %d/%d/%d                                                                |\n", d, m, y);
    printf("| Age       : %d                                                                      |\n", age);
    printf("| Ph no.    : %lld                                                                    |\n", spn);
    printf("| Address   : %s, %s                                                                  |\n", sal1, sal2);
    printf("| Gender    : %s                                                                      |\n", sg);
    printf("| Blood Gr. : %s                                                                      |\n", BG);
    printf("|                                                                                     |\n");
    printf("|-------------------------------------------------------------------------------------|\n");
    printf("|                                   Parent's Details                                  |\n");
    printf("|-------------------------------------------------------------------------------------|\n");
    printf("|                                                                                     |\n");
    printf("| Father's Name   : %s                                                                |\n", fn);
    printf("| Father's Ph no. : %lld                                                              |\n", fpn);
    printf("| Mother's Name   : %s                                                                |\n", mn);
    printf("| Mother's Ph no. : %lld                                                              |\n", mpn);
    printf("| Parent's Wa no. : %lld                                                              |\n", pwn);

    if (strcmp(pal1, "-") == 0 && strcmp(pal2, "-") == 0)
    {
    printf("| Parent's Address: %s, %s                                                            |\n", sal1, sal2);
    }
    else
    {
    printf("| Parent's Address: %s, %s                                                            |\n", pal1, pal2);
    }

    printf("|                                                                                     |\n");

    if (gc == 'Y' || gc == 'y')
    {

    printf("|-------------------------------------------------------------------------------------|\n");
    printf("|                                 Guardian's Details                                  |\n");
    printf("|-------------------------------------------------------------------------------------|\n");
    printf("|                                                                                     |\n");
    printf("| Guardian's Name   : %s                                                              |\n", gn);
    printf("| Guardian's Ph no. : %lld                                                              |\n", gpn);
    printf("| Relation with Student : %s                                                          |\n", grws);
        if (strcmp(gal1, "-") == 0 && strcmp(gal2, "-") == 0)
        {
    printf("| Guardian's Address: %s, %s                                                          |\n", sal1, sal2);
        }
        else
        {
    printf("| Guardian's Address: %s, %s                                                          |\n", gal1, gal2);
        }
    printf("|                                                                                     |\n");
    printf("|-------------------------------------------------------------------------------------|\n");
    }

    else
    {
    printf("|-------------------------------------------------------------------------------------|\n");
    printf("|                                 Guardian's Details                                  |\n");
    printf("|-------------------------------------------------------------------------------------|\n");
    printf("|                                                                                     |\n");
    printf("| Guardian's Name   : N/A                                                             |\n");
    printf("| Guardian's Ph no. : N/A                                                             |\n");
    printf("| Relation with Student : N/A                                                         |\n");
    printf("| Guardian's Address    : N/A                                                         |\n");
    printf("|                                                                                     |\n");
    printf("|-------------------------------------------------------------------------------------|\n");
    }

    printf("|                                                                                     |\n");
    printf("|-------------------------------------------------------------------------------------|\n");
    printf("|                                  Educational Details                                |\n");
    printf("|-------------------------------------------------------------------------------------|\n");
    printf("|                                                                                     |\n");
    printf("| Previous class : %d                                                                 |\n", pc);
    printf("| Stream         : %s                                                                 |\n", stream);

    if (strcmp(stream, "Science") == 0)
    {

    printf("| Group             : %s                                                              |\n", sgroup);
    printf("| Physics Marks     : %d                                                              |\n", phym);
    printf("| Chemistry Marks   : %d                                                              |\n", chemm);

        if (strcmp(sgroup, "A") == 0)
        {
    printf("| Mathematics Marks : %d                                                              |\n", mathm);
        }
        else if (strcmp(sgroup, "B") == 0)
        {
    printf("| Biology Marks     : %d                                                              |\n", biom);
        }
        else if (strcmp(sgroup, "AB") == 0)
        {
    printf("| Mathematics Marks : %d                                                              |\n", mathm);
    printf("| Biology Marks     : %d                                                              |\n", biom);
        }
    printf("| English Marks     : %d                                                              |\n", engm);
    printf("| Computer Marks    : %d                                                              |\n", compm);
    }

    if (strcmp(stream, "Commerce") == 0)
    {

    printf("| Accountancy Marks : %d                                                              |\n", accm);
    printf("| OCM Marks         : %d                                                              |\n", ocmm);
    printf("| Economics Marks   : %d                                                              |\n", ecom);
    printf("| Statistics Marks  : %d                                                              |\n", statm);
    printf("| English Marks     : %d                                                              |\n", engm);

        if (strcmp(ASC, "Computer") == 0)
        {
    printf("| Computer Marks    : %d                                                              |\n", compm);
        }
        else if (strcmp(ASC, "Mathematics") == 0)
        {
    printf("| Mathematics Marks : %d                                                              |\n", Cmathm);
        }
        else if (strcmp(ASC, "Both") == 0)
        {
    printf("| Computer Marks    : %d                                                              |\n", compm);
    printf("| Mathematics Marks : %d                                                              |\n", Cmathm);
        }
    }

    if (strcmp(stream, "Arts") == 0 || strcmp(stream, "Humanities") == 0)
    {

    printf("| Economics Marks   : %d                                                              |\n", ecom);
    printf("| Psychology Marks  : %d                                                              |\n", psym);
    printf("| Sociology Marks   : %d                                                              |\n", sociom);
    printf("| Geography Marks   : %d                                                              |\n", geom);
    printf("| English Marks     : %d                                                              |\n", engm);

        if (strcmp(ASC, "Computer") == 0)
        {
    printf("| Computer Marks    : %d                                                              |\n", compm);
        }
        else if (strcmp(ASC, "Gujarati") == 0)
        {
    printf("| Gujarati Marks    : %d                                                              |\n", gujm);
        }
        else if (strcmp(ASC, "Both") == 0)
        {
    printf("| Gujarati Marks    : %d                                                              |\n", gujm);
    printf("| Computer Marks : %d                                                              |\n", compm);
        }
    }

    printf("|                                                                                     |\n");
    printf("|-------------------------------------------------------------------------------------|\n");
    printf("|                                                                                     |\n");
    printf("|-------------------------------------------------------------------------------------|\n");
    printf("|                                Students' Preference                                 |\n");
    printf("|-------------------------------------------------------------------------------------|\n");
    printf("|                                                                                     |\n");
    printf("| Field Choice   : %s                                                                 |\n", f);
    printf("| Degree Choice  : %s                                                                 |\n", dn);
    printf("| Specialization : %s                                                                 |\n", sn);
    printf("|                                                                                     |\n");
    printf("|_____________________________________________________________________________________|\n");

    // Marks Calculation Area

    if (strcmp(stream, "Science") == 0)
    {
        obtm = phym + chemm + mathm + biom + engm + compm;
    }

    else if (strcmp(stream, "Commerce") == 0)
    {
        obtm = accm + ocmm + ecom + statm + engm + compm + Cmathm;
    }

    else if (strcmp(stream, "Arts") == 0 || strcmp(stream, "Humanities") == 0)
    {
        obtm = ecom + psym + sociom + geom + engm + compm + gujm;
    }

    obtp = ((float)obtm / totalm) * 100;

    /* (Checking Purpose)
    printf("Obtained Marks %d\n", obtm);
    printf("Total marks : %d\n", totalm);
    printf("Obtained Percentage : %.2f %% \n", obtp);
    printf("You have enrolled in %s and specialised in %s", dn, sn);
    */

    /*
    =====================================================================================================
                                         Admission Eligibility Filter
    =====================================================================================================
    */

    int is_eligible = 1;

    if (obtp < 60)
    {
        is_eligible = 0;
    }

    // Checking Science Stream

    if (strcmp(stream, "Science") == 0)
    {
        if (phym < 45 || chemm < 45 || engm < 45 || compm < 45)
            is_eligible = 0;
        if (strcmp(sgroup, "A") == 0 && mathm < 45)
            is_eligible = 0;
        if (strcmp(sgroup, "B") == 0 && biom < 45)
            is_eligible = 0;
        if (strcmp(sgroup, "AB") == 0 && (mathm < 45 || biom < 45))
            is_eligible = 0;
    }

    // Checking Commerce Stream

    else if (strcmp(stream, "Commerce") == 0)
    {
        if (accm < 45 || ocmm < 45 || ecom < 45 || statm < 45 || engm < 45)
            is_eligible = 0;
        if (strcmp(ASC, "Computer") == 0 && compm < 45)
            is_eligible = 0;
        if (strcmp(ASC, "Mathematics") == 0 && Cmathm < 45)
            is_eligible = 0;
        if (strcmp(ASC, "Both") == 0 && (compm < 45 || Cmathm < 45))
            is_eligible = 0;
    }

    // Checking Arts/Humanities stream

    else if (strcmp(stream, "Arts") == 0 || strcmp(stream, "Humanities") == 0)
    {
        if (ecom < 45 || psym < 45 || sociom < 45 || geom < 45 || engm < 45)
            is_eligible = 0;
        if (strcmp(ASC, "Computer") == 0 && compm < 45)
            is_eligible = 0;
        if (strcmp(ASC, "Gujarati") == 0 && gujm < 45)
            is_eligible = 0;
        if (strcmp(ASC, "Both") == 0 && (compm < 45 || gujm < 45))
            is_eligible = 0;
    }

    // Provisonal Status

    if (is_eligible == 1)
    {
        printf("=======================================================================================================================\n");
        printf(" Final Admission Status : Provisionally Admitted!! \n");
        printf("=======================================================================================================================\n");

        printf("\n");
        
        printf("Congratulation %s, You have fulfilled Min. Aggregrate(>=60%%) and min individual subject(>=45%%) criteria\n", sfn);
        printf("You have made one step closer towards your Bright Future\n");
        printf("We are waiting for you and you should wait for Merit List we will release and sent it to your given email %s soon\n", email);
        printf("Have a Nice Day!!!");
        
        printf("\n");
        
        printf("=====*========*========*========*========*========*========*========*========*========*========*========*========*=====\n");
    }
    
    else
    {
        printf("=======================================================================================================================\n");
        printf(" Final Admission Status : Provisionally Rejected \n");
        printf("=======================================================================================================================\n");
        
        printf("\n");
        printf("Dear %s, Your Application was rejected for following specific reasons : \n", sfn);
        printf("\n");

        //Detailed Reason for Application Rejection
        if(obtp < 60){
            printf("You've got Overall '%.2f%%' against minimum Aggregate of 60%%\n", obtp);
        }
        if(strcmp(stream, "Science") == 0){
            if(phym < 45) printf("You've got %d marks in Physics against minimum requirement of 45 marks\n", phym);
            if(chemm < 45) printf("You've got %d marks in Chemistry against minimum requirement of 45 marks\n", chemm);
            if(mathm < 45 && (strcmp(sgroup, "A") == 0 || strcmp(sgroup, "AB") == 0)){
                printf("You've got %d marks in Mathematics against minimum requirement of 45 marks\n", mathm);
            }
            if(biom < 45 && (strcmp(sgroup, "B") == 0 || strcmp(sgroup, "AB") == 0)){
                printf("You've got %d marks in Biology against minimum requirement of 45 marks\n", biom);
            }
            if(engm < 45) printf("You've got %d marks in English against minimum requirement of 45 marks\n", engm);
            if(compm < 45) printf("You've got %d marks in Computer against minimum requirement of 45 marks\n", compm);
        }
        if(strcmp(stream, "Commerce") == 0){
            if(accm < 45) printf("You've got %d marks in Accounts against minimum requirement of 45 marks\n", accm);
            if(ocmm < 45) printf("You've got %d marks in OCM against minimum requirement of 45 marks\n", ocmm);
            if(ecom < 45) printf("You've got %d marks in Economics against minimum requirement of 45 marks\n", ecom);
            if(statm < 45) printf("You've got %d marks in Statistics against minimum requirement of 45 marks\n", statm);
            if(engm < 45) printf("You've got %d marks in English against minimum requirement of 45 marks\n", engm);
            if(Cmathm < 45 && (strcmp(ASC, "Mathematics") == 0 || strcmp(ASC, "Both") == 0)){
                printf("You've got %d marks in Mathematics against minimum requirement of 45 marks\n", Cmathm);
            }
            if(compm < 45 && (strcmp(ASC, "Computer") == 0 || strcmp(ASC, "Both") == 0)){
                printf("You've got %d marks in Computer against minimum requirement of 45 marks\n", compm);
            }
        }
        if(strcmp(stream, "Arts") == 0 || strcmp(stream, "Humanities") == 0){
            if(psym < 45) printf("You've got %d marks in Psychology against minimum requirement of 45 marks\n", psym);
            if(sociom < 45) printf("You've got %d marks in Sociology against minimum requirement of 45 marks\n", sociom);
            if(ecom < 45) printf("You've got %d marks in Economics against minimum requirement of 45 marks\n", ecom);
            if(geom < 45) printf("You've got %d marks in Geology against minimum requirement of 45 marks\n", geom);
            if(engm < 45) printf("You've got %d marks in English against minimum requirement of 45 marks\n", engm);
            if(gujm < 45 && (strcmp(ASC, "Gujarati") == 0 || strcmp(ASC, "Both") == 0)){
                printf("You've got %d marks in Gujarati against minimum requirement of 45 marks\n", gujm);
            }
            if(compm < 45 && (strcmp(ASC, "Computer") == 0 || strcmp(ASC, "Both") == 0)){
                printf("You've got %d marks in Computer against minimum requirement of 45 marks\n", compm);
            }
        }

        printf("\n");
        printf("We are very sorry that we can't welcome you.\n"); 
        printf("But if you think there is some discrepancy from our Side, Feel free to contact our Help desk '+91-79-61755500' during office timeing from 9:00 AM to 4:30 PM on Monday to Saturday. \n");
        printf("You can also connect to a counsellor from our University Counsellor Team for further guidance and future paths.");
    }
    return 0;
}