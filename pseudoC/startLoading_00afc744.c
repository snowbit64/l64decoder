// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startLoading
// Entry Point: 00afc744
// Size: 112 bytes
// Signature: undefined __cdecl startLoading(char * param_1)


/* GiantsNotificationManager::startLoading(char const*) */

void GiantsNotificationManager::startLoading(char *param_1)

{
  Thread *this;
  
  if (param_1[2] != '\0') {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(param_1 + 8);
    this = (Thread *)operator_new(0x48);
                    /* try { // try from 00afc770 to 00afc773 has its CatchHandler @ 00afc7b4 */
    Thread::Thread(this);
    *(Thread **)(param_1 + 0xf0) = this;
    Thread::start(this,backgroundLoadingThread,param_1,0xffffffff,"GIANTS NotificationManager",2,
                  0x80000);
    return;
  }
  return;
}


