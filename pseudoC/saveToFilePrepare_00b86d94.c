// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveToFilePrepare
// Entry Point: 00b86d94
// Size: 240 bytes
// Signature: undefined __thiscall saveToFilePrepare(DensityMap * this, char * param_1)


/* DensityMap::saveToFilePrepare(char const*) */

void __thiscall DensityMap::saveToFilePrepare(DensityMap *this,char *param_1)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 *this_00;
  ulong local_60;
  ulong local_58;
  char *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(long *)(this + 0xf8) == 0) {
    local_60 = 0;
    local_58 = 0;
    local_50 = (char *)0x0;
                    /* try { // try from 00b86dcc to 00b86dd3 has its CatchHandler @ 00b86e94 */
    getSaveFilename(this,param_1,(basic_string *)&local_60);
    pcVar5 = local_50;
    uVar4 = local_60 & 1;
    uVar1 = (ulong)((byte)local_60 >> 1);
    if ((local_60 & 1) != 0) {
      uVar1 = local_58;
    }
    if (uVar1 != 0) {
                    /* try { // try from 00b86df0 to 00b86df7 has its CatchHandler @ 00b86e98 */
      this_00 = (undefined8 *)operator_new(0x80);
      pcVar2 = (char *)((ulong)&local_60 | 1);
      if (uVar4 != 0) {
        pcVar2 = pcVar5;
      }
                    /* try { // try from 00b86e0c to 00b86e17 has its CatchHandler @ 00b86e84 */
      SaveHelper::SaveHelper((SaveHelper *)this_00,pcVar2,"DensityMapSaveHelper");
      this_00[0xb] = 0;
      *(undefined4 *)(this_00 + 0xc) = 0;
      this_00[0xd] = 0;
      *(undefined8 **)(this + 0xf8) = this_00;
      *this_00 = &PTR__DensityMapSaveHelper_00fea728;
                    /* try { // try from 00b86e38 to 00b86e43 has its CatchHandler @ 00b86e98 */
      DensityMapSaveHelper::saveToMemory((DensityMapSaveHelper *)this_00,this);
    }
    if (((byte)local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


