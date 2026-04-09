// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: get
// Entry Point: 00b34844
// Size: 216 bytes
// Signature: undefined __thiscall get(NativeFileLoader * this, char * param_1, ACCESS_MODE param_2, bool param_3, bool param_4)


/* NativeFileLoader::get(char const*, File::ACCESS_MODE, bool, bool) */

long * __thiscall
NativeFileLoader::get
          (NativeFileLoader *this,char *param_1,ACCESS_MODE param_2,bool param_3,bool param_4)

{
  ACCESS_MODE AVar1;
  long lVar2;
  ulong uVar3;
  long *this_00;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_50 = 0;
  uStack_48 = 0;
  local_40 = (void *)0x0;
                    /* try { // try from 00b34878 to 00b34883 has its CatchHandler @ 00b34930 */
  uVar3 = getFullPath(this,param_1,param_3,(basic_string *)&local_50);
  this_00 = (long *)0x0;
  if (((uVar3 & 1) != 0) && (!param_4)) {
                    /* try { // try from 00b34890 to 00b34897 has its CatchHandler @ 00b3492c */
    this_00 = (long *)operator_new(0x28);
                    /* try { // try from 00b3489c to 00b3489f has its CatchHandler @ 00b3491c */
    NativeFile::NativeFile((NativeFile *)this_00);
    AVar1 = (uint)&local_50 | 1;
    if ((local_50 & 1) != 0) {
      AVar1 = (ACCESS_MODE)local_40;
    }
                    /* try { // try from 00b348b8 to 00b348c7 has its CatchHandler @ 00b3492c */
    uVar3 = NativeFile::open((char *)this_00,AVar1,SUB41(param_2,0));
    if ((uVar3 & 1) == 0) {
      (**(code **)(*this_00 + 8))(this_00);
      this_00 = (long *)0x0;
    }
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


