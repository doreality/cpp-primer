/* try wrong
 * embedded /* comments */
 */

int main()
{
    return 0;

}

// 错误信息：
//
// ex1-7.cc:2:13: warning: '/*' within block comment [-Wcomment]
//  * embedded /* comments */
//             ^
// ex1-7.cc:3:3: error: expected unqualified-id
//  */