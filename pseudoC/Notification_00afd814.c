// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Notification
// Entry Point: 00afd814
// Size: 144 bytes
// Signature: undefined __thiscall Notification(Notification * this, Notification * param_1)


/* GiantsNotificationManager::Notification::Notification(GiantsNotificationManager::Notification
   const&) */

void __thiscall
GiantsNotificationManager::Notification::Notification(Notification *this,Notification *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  this[8] = param_1[8];
  *(undefined8 *)this = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
                    /* try { // try from 00afd854 to 00afd85b has its CatchHandler @ 00afd924 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x28));
                    /* try { // try from 00afd864 to 00afd86b has its CatchHandler @ 00afd904 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x40));
                    /* try { // try from 00afd874 to 00afd87b has its CatchHandler @ 00afd8e4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x58));
                    /* try { // try from 00afd884 to 00afd887 has its CatchHandler @ 00afd8a4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x70));
  this[0x88] = param_1[0x88];
  return;
}


