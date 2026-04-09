// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onProfileFileDownloaded
// Entry Point: 00c67288
// Size: 168 bytes
// Signature: undefined __thiscall onProfileFileDownloaded(UserBlockManager * this, char * param_1, char * param_2, uchar * param_3, uint param_4)


/* UserBlockManager::onProfileFileDownloaded(char const*, char const*, unsigned char const*,
   unsigned int) */

void __thiscall
UserBlockManager::onProfileFileDownloaded
          (UserBlockManager *this,char *param_1,char *param_2,uchar *param_3,uint param_4)

{
  long lVar1;
  ulong uVar2;
  NativeFile aNStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_3 != (uchar *)0x0) && (param_4 != 0)) {
    NativeFile::NativeFile(aNStack_70);
                    /* try { // try from 00c672cc to 00c672f3 has its CatchHandler @ 00c67330 */
    uVar2 = NativeFile::open((char *)aNStack_70,(ACCESS_MODE)param_2,true);
    if ((uVar2 & 1) != 0) {
      NativeFile::write(aNStack_70,param_3,param_4);
    }
    NativeFile::~NativeFile(aNStack_70);
  }
  loadBlockedUsersFile();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


