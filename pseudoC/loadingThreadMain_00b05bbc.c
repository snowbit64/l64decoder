// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadingThreadMain
// Entry Point: 00b05bbc
// Size: 488 bytes
// Signature: undefined __thiscall loadingThreadMain(WebResourceManager * this, bool param_1, bool * param_2)


/* WebResourceManager::loadingThreadMain(bool, bool volatile&) */

void __thiscall
WebResourceManager::loadingThreadMain(WebResourceManager *this,bool param_1,bool *param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  byte **__dest;
  size_t __n;
  long lVar3;
  byte bVar4;
  basic_string *pbVar5;
  byte *pbVar6;
  AndroidHTTPSRequest aAStack_110 [160];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  AndroidHTTPSRequest::AndroidHTTPSRequest(aAStack_110);
                    /* try { // try from 00b05c00 to 00b05c3f has its CatchHandler @ 00b05da4 */
  AndroidHTTPSRequest::init((char *)aAStack_110,false,true);
  AndroidHTTPSRequest::setUserAgent(aAStack_110,"GIANTS Engine");
  AndroidHTTPSRequest::setReferer(aAStack_110,"http://www.farming-simulator.com/");
  AndroidHTTPSRequest::setCancelFlag(aAStack_110,param_2);
  do {
                    /* try { // try from 00b05c60 to 00b05c67 has its CatchHandler @ 00b05da8 */
    if ((*param_2 != false) || (Semaphore::wait(), *param_2 != false)) break;
    while( true ) {
                    /* try { // try from 00b05c70 to 00b05c77 has its CatchHandler @ 00b05dac */
      Mutex::enterCriticalSection();
      __dest = *(byte ***)(this + 0x50);
      if (*(byte ***)(this + 0x58) == __dest) {
        pbVar6 = (byte *)0x0;
      }
      else {
        pbVar6 = *__dest;
        __n = (long)*(byte ***)(this + 0x58) - (long)(__dest + 1);
        *(undefined4 *)(pbVar6 + 0x38) = 1;
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        *(size_t *)(this + 0x58) = (long)__dest + __n;
        *(int *)(this + 0x68) = *(int *)(this + 0x68) + 1;
      }
                    /* try { // try from 00b05cc0 to 00b05d5f has its CatchHandler @ 00b05dac */
      Mutex::leaveCriticalSection();
      if (pbVar6 == (byte *)0x0) break;
      puVar1 = (undefined2 *)(pbVar6 + 0x18);
      pbVar5 = *(basic_string **)(pbVar6 + 0x10);
      if ((*pbVar6 & 1) == 0) {
        pbVar5 = (basic_string *)(pbVar6 + 1);
      }
      bVar4 = AndroidHTTPSRequest::httpGET
                        ((char *)aAStack_110,pbVar5,(Range *)puVar1,(char *)0x0,(uint *)0x0,
                         (map *)0x0);
      pbVar6[0x30] = bVar4 & 1;
      if ((bVar4 & 1) == 0) {
        if ((*(byte *)puVar1 & 1) == 0) {
          *puVar1 = 0;
        }
        else {
          **(undefined **)(pbVar6 + 0x28) = 0;
          *(undefined8 *)(pbVar6 + 0x20) = 0;
        }
      }
      Mutex::enterCriticalSection();
      *(undefined4 *)(pbVar6 + 0x38) = 2;
      *(int *)(this + 0x68) = *(int *)(this + 0x68) + -1;
      uVar2 = (uint)(pbVar6[0x18] >> 1);
      if ((pbVar6[0x18] & 1) != 0) {
        uVar2 = *(uint *)(pbVar6 + 0x20);
      }
      *(uint *)(this + 0x6c) = *(int *)(this + 0x6c) + uVar2;
      Mutex::leaveCriticalSection();
    }
  } while (!param_1);
  AndroidHTTPSRequest::~AndroidHTTPSRequest(aAStack_110);
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


