// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00a4a8ec
// Size: 444 bytes
// Signature: undefined clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioSource::clone() */

AudioSource * AudioSource::clone(void)

{
  char **ppcVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  uint uVar5;
  TransformGroup *in_x0;
  AudioSource *this;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_b8;
  uint local_b0 [2];
  float *local_a8;
  float *local_a0;
  undefined8 uStack_98;
  uint local_90 [4];
  char **local_80;
  char **local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_b0[0] = 0;
  local_a0 = (float *)0x0;
  uStack_98 = 0;
  local_a8 = (float *)0x0;
  local_90[0] = 0;
  local_78 = (char **)0x0;
  uStack_70 = 0;
  local_80 = (char **)0x0;
                    /* try { // try from 00a4a944 to 00a4a94b has its CatchHandler @ 00a4aac0 */
  for (uVar6 = 0; uVar5 = AudioSourceSample::getNumElements(), uVar6 < uVar5; uVar6 = uVar6 + 1) {
                    /* try { // try from 00a4a954 to 00a4a96f has its CatchHandler @ 00a4aac4 */
    local_b8 = (char *)AudioSourceSample::getElementFilenameAt
                                 ((AudioSourceSample *)(in_x0 + 0x158),uVar6);
    SmallVector<char_const*,1u>::push_back
              ((SmallVector<char_const*,1u> *)local_90,(char **)&local_b8);
    if (((byte)in_x0[0x1d0] >> 2 & 1) != 0) {
                    /* try { // try from 00a4a978 to 00a4a993 has its CatchHandler @ 00a4aabc */
      uVar8 = AudioSourceSample::getElementProbabilityAt((AudioSourceSample *)(in_x0 + 0x158),uVar6)
      ;
      local_b8 = (char *)CONCAT44(local_b8._4_4_,uVar8);
      SmallVector<float,1u>::push_back((SmallVector<float,1u> *)local_b0,(float *)&local_b8);
    }
  }
                    /* try { // try from 00a4a998 to 00a4a99f has its CatchHandler @ 00a4aaa8 */
  this = (AudioSource *)operator_new(0x298);
  uVar6 = local_90[0];
  pcVar7 = *(char **)(in_x0 + 8);
  ppcVar1 = (char **)((ulong)local_90 | 4);
  if (1 < local_90[0]) {
    ppcVar1 = local_80;
  }
                    /* try { // try from 00a4a9c0 to 00a4aa33 has its CatchHandler @ 00a4aaac */
  fVar9 = (float)Sample::getMaxDistance();
  fVar10 = (float)Sample::getMinDistance();
  fVar11 = (float)Sample::getVolume();
  pfVar2 = (float *)((ulong)local_b0 | 4);
  if (1 < local_b0[0]) {
    pfVar2 = local_a8;
  }
  pfVar3 = (float *)0x0;
  if (local_b0[0] != 0) {
    pfVar3 = pfVar2;
  }
  AudioSource(this,pcVar7,ppcVar1,uVar6,fVar9,fVar10,fVar11,*(int *)(in_x0 + 0x1dc),pfVar3,
              *(float *)(in_x0 + 0x1d4),*(float *)(in_x0 + 0x1d8),*(uint *)(in_x0 + 0x1c0),1);
                    /* try { // try from 00a4aa34 to 00a4aa3f has its CatchHandler @ 00a4aaa8 */
  TransformGroup::copyTransformGroupPropertiesFrom((TransformGroup *)this,in_x0);
  local_90[0] = 0;
  if (local_80 != (char **)0x0) {
    local_78 = local_80;
    operator_delete(local_80);
  }
  local_b0[0] = 0;
  if (local_a8 != (float *)0x0) {
    local_a0 = local_a8;
    operator_delete(local_a8);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


