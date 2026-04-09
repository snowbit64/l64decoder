// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CompressMasked
// Entry Point: 00de7afc
// Size: 368 bytes
// Signature: undefined __cdecl CompressMasked(uchar * param_1, int param_2, void * param_3, int param_4)


/* squish::CompressMasked(unsigned char const*, int, void*, int) */

void squish::CompressMasked(uchar *param_1,int param_2,void *param_3,int param_4)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  SingleColourFit aSStack_388 [472];
  int local_1b0 [82];
  long local_68;
  
  uVar2 = param_4 & 7;
  uVar4 = param_4 & 0x118;
  lVar5 = tpidr_el0;
  uVar3 = param_4 & 0x60;
  if (uVar2 != 4 && uVar2 != 2) {
    uVar2 = 1;
  }
  if (uVar4 != 0x10) {
    uVar4 = 8;
  }
  if (uVar3 != 0x40) {
    uVar3 = 0x20;
  }
  local_68 = *(long *)(lVar5 + 0x28);
  uVar3 = uVar4 | param_4 & 0x80U | uVar3 | uVar2;
  pvVar1 = (void *)((long)param_3 + (ulong)((uVar2 & 6) != 0) * 8);
  ColourSet::ColourSet((ColourSet *)local_1b0,param_1,param_2,uVar3);
  if (local_1b0[0] == 1) {
    SingleColourFit::SingleColourFit(aSStack_388,(ColourSet *)local_1b0,uVar3);
    ColourFit::Compress((ColourFit *)aSStack_388,pvVar1);
  }
  else if (((uVar4 >> 4 & 1) == 0) && (local_1b0[0] != 0)) {
    ClusterFit::ClusterFit((ClusterFit *)aSStack_388,(ColourSet *)local_1b0,uVar3);
    ColourFit::Compress((ColourFit *)aSStack_388,pvVar1);
  }
  else {
    RangeFit::RangeFit((RangeFit *)aSStack_388,(ColourSet *)local_1b0,uVar3);
    ColourFit::Compress((ColourFit *)aSStack_388,pvVar1);
  }
  if ((uVar2 >> 1 & 1) == 0) {
    if (uVar2 >> 2 != 0) {
      CompressAlphaDxt5(param_1,param_2,param_3);
    }
  }
  else {
    CompressAlphaDxt3(param_1,param_2,param_3);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


