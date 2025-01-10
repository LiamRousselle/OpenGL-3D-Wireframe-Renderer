/* 
 *	Copyright (c) Liam Rousselle [2025]
 *
 *	THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, 
 *  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF 
 *  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. 
 *  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, 
 *  DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, 
 *  ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER 
 *  DEALINGS IN THE SOFTWARE.
 * 
 *  File Author: Liam Rousselle
 * 
*/

#include "iostream"
#include "glfw3.h"

#define LOG( msg ) std::cout << msg << "\n";
#define ERROR( msg ) std::cerr << msg << "\n";
#define ASSERT( con, msg ) if ( !con ) { ERROR( "Assert Failed: " << msg ); exit( -1 ); }

int main( int argc, char* argv[] )
{
	ASSERT( glfwInit(), "Failed to initialize GLFW");

	GLFWwindow* window = glfwCreateWindow( 640, 480, "Window", NULL, NULL );
	if ( window == nullptr )
	{
		glfwTerminate();
		ERROR( "Failed to create GLFWwindow. Exiting application early." );

		return -1;
	}

	glfwMakeContextCurrent( window );

	while ( !glfwWindowShouldClose( window ) )
	{

		glfwSwapBuffers( window );
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}