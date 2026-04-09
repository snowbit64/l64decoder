// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveToFile
// Entry Point: 00b86c94
// Size: 228 bytes
// Signature: undefined __thiscall saveToFile(DensityMap * this, char * param_1)


/* DensityMap::saveToFile(char const*) */

uint __thiscall DensityMap::saveToFile(DensityMap *this,char *param_1)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  uint uVar4;
  ulong local_40;
  ulong local_38;
  char *local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  local_40 = 0;
  local_38 = 0;
  local_30 = (char *)0x0;
                    /* try { // try from 00b86cbc to 00b86d3b has its CatchHandler @ 00b86d78 */
  getSaveFilename(this,param_1,(basic_string *)&local_40);
  uVar1 = local_40 >> 1 & 0x7f;
  if ((local_40 & 1) != 0) {
    uVar1 = local_38;
  }
  if (uVar1 == 0) {
    uVar4 = 0;
  }
  else if (this[0x90] == (DensityMap)0x0) {
    pcVar2 = (char *)((ulong)&local_40 | 1);
    if ((local_40 & 1) != 0) {
      pcVar2 = local_30;
    }
    uVar4 = RLEUtil::saveRLEImage
                      (pcVar2,*(BitVector **)(this + 0xa0),*(uint *)(this + 0xd4),
                       *(uint *)(this + 0xd8),*(uint *)(this + 0xc4),true);
  }
  else {
    pcVar2 = (char *)((ulong)&local_40 | 1);
    if ((local_40 & 1) != 0) {
      pcVar2 = local_30;
    }
    uVar4 = ChunkedBitSquare::saveToFile(*(ChunkedBitSquare **)(this + 0x98),pcVar2);
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4 & 1;
}


