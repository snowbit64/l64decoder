// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exist
// Entry Point: 00b34d1c
// Size: 160 bytes
// Signature: undefined __thiscall exist(NativeFileLoader * this, char * param_1, bool param_2)


/* NativeFileLoader::exist(char const*, bool) */

bool __thiscall NativeFileLoader::exist(NativeFileLoader *this,char *param_1,bool param_2)

{
  char *pcVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong local_40;
  undefined8 uStack_38;
  char *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_40 = 0;
  uStack_38 = 0;
  local_30 = (char *)0x0;
                    /* try { // try from 00b34d40 to 00b34d6b has its CatchHandler @ 00b34dbc */
  uVar5 = getFullPath(this,param_1,param_2,(basic_string *)&local_40);
  if ((uVar5 & 1) == 0) {
    bVar3 = false;
  }
  else {
    pcVar1 = (char *)((ulong)&local_40 | 1);
    if ((local_40 & 1) != 0) {
      pcVar1 = local_30;
    }
    iVar4 = NativeFileUtil::getFileType(pcVar1,false);
    bVar3 = iVar4 == 1;
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


