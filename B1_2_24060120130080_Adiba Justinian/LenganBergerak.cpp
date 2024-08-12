// Nama : Adiba Justinian
// NIM	: 24060120130080
// Praktikum GKV B1
// Tugas 2 Praktikum GKV Lengan Bergerak dan Jari

#include <GL/glut.h>
static int shoulder = 0, shoulder1 = 0, shoulder2 = 0, elbow = 0, palm = 0;
static int thumb = 0, thumb1 = 0;
static int forefinger = 0, forefinger1 = 0, forefinger2 = 0; 
static int middlefinger = 0, middlefinger1 = 0, middlefinger2 = 0;
static int ringfinger = 0, ringfinger1 = 0, ringfinger2 = 0; 
static int littlefinger = 0, littlefinger1 = 0, littlefinger2 = 0;

void init(void) 
{
	glClearColor (0.0, 0.0, 0.0, 0.0); 
	glShadeModel (GL_FLAT);
}

void display(void) 
{
	glClear (GL_COLOR_BUFFER_BIT); 
	glColor3f(1.0, 1.0, 1.0);
	glLineWidth(1.5f);

	glPushMatrix();	
		//shoulder, elbow	
		glTranslatef (-0.3, -0.3, 0.0); 
		glRotatef ((GLfloat) shoulder, 1.0, 0.0, 0.0);
		glRotatef ((GLfloat) shoulder1, 0.0, 1.0, 0.0); 
		glRotatef ((GLfloat) shoulder2, 0.0, 0.0, 1.0); 
		glTranslatef (-0.5, 0.0, 0.0); 
		glPushMatrix();
			glScalef (0.7, 0.2, 0.3); 
			glutWireCube (1.0); 
		glPopMatrix();
		glTranslatef (0.35, 0.0, 0.0); 
		glRotatef ((GLfloat) elbow, 0.0, 0.0, 1.0); 
		glTranslatef (0.35, 0.0, 0.0); 
		glPushMatrix();
			glScalef (0.7, 0.2, 0.3);
			glutWireCube (1.0); 
		glPopMatrix(); 
		
		
		//palm
		glTranslatef(0.3, 0.0, 0.0);
		glRotatef ((GLfloat) palm, 0.0, 0.0, 1.0);
		glTranslatef(0.35, 0.0, 0.0);
		glPushMatrix();
			glScalef (0.6, 0.2, 0.5);
			glutWireCube (1.0);
		glPopMatrix();
		
		//thumb 
		glPushMatrix();
			glTranslatef(0.4, 0.0, -0.3);
			glRotatef ((GLfloat) thumb, 1.0, 0.0, 0.0);
			glTranslatef(-0.35, 0.0, -0.05);
			glPushMatrix();
				glScalef(0.17, 0.1, 0.2);
				glutWireCube(1.0);
			glPopMatrix();
			glTranslatef(0.35, 0.0, -0.15);
			glRotatef ((GLfloat) thumb1, 1.0, 0.0, 0.0);
			glTranslatef(-0.35, 0.0, -0.05);
			glPushMatrix();
				glScalef(0.15, 0.07, 0.17);
				glutWireCube(1.0);
			glPopMatrix(); 
		glPopMatrix();
	
		//fore finger
		glPushMatrix();
			glTranslatef(0.34, 0.0, -0.2);
			glRotatef ((GLfloat) forefinger, 0.0, 0.0, 1.0);
			glTranslatef(0.05, 0.0, 0.0);
			glPushMatrix();
				glScalef(0.17, 0.15, 0.1);
				glutWireCube(1.0);
			glPopMatrix();
			glTranslatef(0.07, 0.0, 0.0);
			glRotatef ((GLfloat) forefinger1, 0.0, 0.0, 1.0);
			glTranslatef(0.1, 0.0, 0.0);
			glPushMatrix();
				glScalef(0.15, 0.15, 0.1);
				glutWireCube(1.0);
			glPopMatrix();
			glTranslatef(0.06, 0.0, 0.0);
			glRotatef ((GLfloat) forefinger2, 0.0, 0.0, 1.0);
			glTranslatef(0.1, 0.0, 0.0);
			glPushMatrix();
				glScalef(0.17, 0.15, 0.1);
				glutWireCube(1.0);
			glPopMatrix();
		glPopMatrix();
	
		//middle finger
		glPushMatrix();
			glTranslatef(0.35, 0.0, -0.07);
			glRotatef ((GLfloat) middlefinger, 0.0, 0.0, 1.0);
			glTranslatef(0.05, 0.0, 0.0);
			glPushMatrix();
				glScalef(0.2, 0.15, 0.1);
				glutWireCube(1.0);
			glPopMatrix();
			glTranslatef(0.1, 0.0, 0.0); 
			glRotatef ((GLfloat) middlefinger1, 0.0, 0.0, 1.0);
			glTranslatef(0.1, 0.0, 0.0); 
			glPushMatrix();
				glScalef(0.18, 0.15, 0.1);
				glutWireCube(1.0);
			glPopMatrix();
			glTranslatef(0.1, 0.0, 0.0);
			glRotatef ((GLfloat) middlefinger2, 0.0, 0.0, 1.0);
			glTranslatef(0.1, 0.0, 0.0);
			glPushMatrix();
				glScalef(0.18, 0.15, 0.1);
				glutWireCube(1.0);
			glPopMatrix();
		glPopMatrix();
		
		//ring finger
		glPushMatrix();
			glTranslatef(0.34, 0.0, 0.06);
			glRotatef ((GLfloat) ringfinger, 0.0, 0.0, 1.0);
			glTranslatef(0.05, 0.0, 0.0);
			glPushMatrix();
				glScalef(0.17, 0.15, 0.1);
				glutWireCube(1.0);
			glPopMatrix();
			glTranslatef(0.07, 0.0, 0.0);
			glRotatef ((GLfloat) ringfinger1, 0.0, 0.0, 1.0);
			glTranslatef(0.1, 0.0, 0.0);
			glPushMatrix();
				glScalef(0.15, 0.15, 0.1);
				glutWireCube(1.0);
			glPopMatrix();
			glTranslatef(0.06, 0.0, 0.0);
			glRotatef ((GLfloat) ringfinger2, 0.0, 0.0, 1.0);
			glTranslatef(0.1, 0.0, 0.0);
			glPushMatrix();
				glScalef(0.17, 0.15, 0.1);
				glutWireCube(1.0);
			glPopMatrix();
		glPopMatrix();
		
		//little finger
		glPushMatrix();
			glTranslatef(0.31, 0.0, 0.19);
			glRotatef ((GLfloat) littlefinger, 0.0, 0.0, 1.0);
			glTranslatef(0.05, 0.0, 0.0);
			glPushMatrix();
				glScalef(0.12, 0.15, 0.1);
				glutWireCube(1.0);
			glPopMatrix();
			glTranslatef(0.02, 0.0, 0.0);
			glRotatef ((GLfloat) littlefinger1, 0.0, 0.0, 1.0);
			glTranslatef(0.1, 0.0, 0.0);
			glPushMatrix();
				glScalef(0.12, 0.15, 0.1);
				glutWireCube(1.0);
			glPopMatrix();
			glTranslatef(0.02, 0.0, 0.0);
			glRotatef ((GLfloat) littlefinger2, 0.0, 0.0, 1.0);
			glTranslatef(0.1, 0.0, 0.0);
			glPushMatrix();
				glScalef(0.13, 0.15, 0.1);
				glutWireCube(1.0);
			glPopMatrix();
		glPopMatrix();
	glPopMatrix();
	
	glutSwapBuffers();		
}

void reshape (int w, int h) 
{
	glViewport (0, 0, (GLsizei) w, (GLsizei) h); 
	glMatrixMode (GL_PROJECTION); 
	glLoadIdentity ();
	gluPerspective(35.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0); 
	glMatrixMode(GL_MODELVIEW); 
	glLoadIdentity();
	glTranslatef (0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y) 
{
	switch (key) 
	{   
		//shoulder
 		case 's': shoulder = (shoulder + 5) % 360; 
		glutPostRedisplay(); 
		break; 
 		case 'S': shoulder = (shoulder - 5) % 360; 
		glutPostRedisplay(); 
		break;
		case 'y': shoulder1 = (shoulder1 + 5) % 360; 
		glutPostRedisplay(); 
		break; 
 		case 'Y': shoulder1 = (shoulder1 - 5) % 360; 
		glutPostRedisplay(); 
		break;
		case 'z': shoulder2 = (shoulder2 + 5) % 360;
        glutPostRedisplay();
        break;
      	case 'Z': shoulder2 = (shoulder2 - 5) % 90;
		glutPostRedisplay();
        break;
		
		//elbow 
 		case 'e': elbow = (elbow + 5) % 360; 
		glutPostRedisplay(); 
		break; 
 		case 'E': elbow = (elbow - 5) % 360; 
		glutPostRedisplay();
		break; 

		//palm
		case 'p': palm = (palm + 5) % 90;
			if (palm > 90) 
				palm = 90;
         	glutPostRedisplay();
        break;
      	case 'P': palm = (palm - 5) % 90;
      		if (palm < -90) 
			  	palm = -90;
         	glutPostRedisplay();
        break;
		
		//thumb
		case 't': thumb = (thumb + 5) % 90;
			if (thumb > 90) 
				thumb = 90;
         	glutPostRedisplay();
        break;
      	case 'T': thumb = (thumb - 5) % 90;
      		if (thumb < 0)
      			thumb = 0;
         	glutPostRedisplay();
        break;
        case 'u': thumb1 = (thumb1 + 5) % 90;
			if (thumb1 > 90) 
				thumb1 = 90;
         	glutPostRedisplay();
        break;
      	case 'U': thumb1 = (thumb1 - 5) % 90;
      		if (thumb1 < 0)
      		 	thumb1 = 0;
         	glutPostRedisplay();
        break;
        
		//fore finger
		case 'f': forefinger = (forefinger + 5) % 360;
			if (forefinger > 90)
				forefinger = 90;
         	glutPostRedisplay();
        break;
      	case 'F': forefinger = (forefinger - 5) % 90;
      		if (forefinger < 0)
      			forefinger = 0;
         	glutPostRedisplay();
        break;			 
		case 'g': forefinger1 = (forefinger1 + 5) % 90;
			if (forefinger1 > 90)
			forefinger1 = 90;
         	glutPostRedisplay();
        break;
      	case 'G': forefinger1 = (forefinger1 - 5) % 90;
      		if (forefinger1 < 0)
      			forefinger1 = 0;
         	glutPostRedisplay();
        break;
		case 'h': forefinger2 = (forefinger2 + 5) % 90;
			if (forefinger2 > 90)
			forefinger2 = 90;
         	glutPostRedisplay();
        break;
      	case 'H': forefinger2 = (forefinger2 - 5) % 90;
      		if (forefinger2 < 0)
      			forefinger2 = 0;
         	glutPostRedisplay();
        break;
		
		//middle finger
		case 'm': middlefinger = (middlefinger + 5) % 90;
			if (middlefinger > 90)
				middlefinger = 90;
         	glutPostRedisplay();
        break;
      	case 'M': middlefinger = (middlefinger - 5) % 90;
      		if (middlefinger < 0)
      			middlefinger = 0;
         	glutPostRedisplay();
        break;
 		case 'n': middlefinger1 = (middlefinger1 + 5) % 90;
			if (middlefinger1 > 90)
				middlefinger1 = 90;
         	glutPostRedisplay();
        break;
      	case 'N': middlefinger1 = (middlefinger1 - 5) % 90;
      		if (middlefinger1 < 0)
      			middlefinger1 = 0;
         	glutPostRedisplay();
        break;		
		case 'o': middlefinger2 = (middlefinger2 + 5) % 90;
			if (middlefinger2 > 90)
				middlefinger2 = 90;
         	glutPostRedisplay();
        break;
      	case 'O': middlefinger2 = (middlefinger2 - 5) % 90;
      		if (middlefinger2 < 0)
      			middlefinger2 = 0;
         	glutPostRedisplay();
        break;       
        
        //ring finger
		case 'r': ringfinger = (ringfinger + 5) % 90;
			if (ringfinger > 90)
				ringfinger = 90;
         	glutPostRedisplay();
        break;
      	case 'R': ringfinger = (ringfinger - 5) % 90;
      		if(ringfinger < 0)
      			ringfinger = 0;
         	glutPostRedisplay();
        break;
 		case 'w': ringfinger1 = (ringfinger1 + 5) % 90;
			if (ringfinger1 > 90)
				ringfinger1 = 90;
         	glutPostRedisplay();
        break;
      	case 'W': ringfinger1 = (ringfinger1 - 5) % 90;
      		if(ringfinger1 < 0)
      			ringfinger1 = 0;
         	glutPostRedisplay();
        break;
		case 'x': ringfinger2 = (ringfinger2 + 5) % 90;
			if (ringfinger2 > 90)
				ringfinger2 = 90;
         	glutPostRedisplay();
        break;
      	case 'X': ringfinger2 = (ringfinger2 - 5) % 90;
      		if(ringfinger2 < 0)
      			ringfinger2 = 0;
         	glutPostRedisplay();
        break;  
		
		//little finger
		case 'l': littlefinger = (littlefinger + 5) % 90;
			if (littlefinger > 90)
				littlefinger = 90;
			glutPostRedisplay();
        break;
      	case 'L': littlefinger = (littlefinger - 5) % 90;
      		if(littlefinger < 0)
      			littlefinger = 0;
         	glutPostRedisplay();
	 	break;
		case 'k': littlefinger1 = (littlefinger1 + 5) % 90;
			if (littlefinger1 > 90)
				littlefinger1 = 90;
			glutPostRedisplay();
        break;
      	case 'K': littlefinger1 = (littlefinger1 - 5) % 90;
      		if(littlefinger1 < 0)
      			littlefinger1 = 0;
         	glutPostRedisplay();
	 	break;
	 	case 'j': littlefinger2 = (littlefinger2 + 5) % 90;
			if (littlefinger2 > 90)
				littlefinger2 = 90;
			glutPostRedisplay();
        break;
      	case 'J': littlefinger2 = (littlefinger2 - 5) % 90;
      		if(littlefinger2 < 0)
      			littlefinger2 = 0;
         	glutPostRedisplay();
	 	break;
			     
		case 27: exit(0); 
		break; 
		default : break;         
	}    
}

int main(int argc, char** argv) 
{ 
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB); 
	glutInitWindowSize (700, 600); 
	glutInitWindowPosition (100, 100); 
	glutCreateWindow (argv[0]); 
	init();
	glutDisplayFunc(display); 
	glutReshapeFunc(reshape); 
	glutKeyboardFunc(keyboard); 
	glutMainLoop(); 
	return 0;
}
