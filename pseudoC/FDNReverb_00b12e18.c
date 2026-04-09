// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FDNReverb
// Entry Point: 00b12e18
// Size: 1224 bytes
// Signature: undefined __thiscall FDNReverb(FDNReverb * this, float param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FDNReverb::FDNReverb(float) */

void __thiscall FDNReverb::FDNReverb(FDNReverb *this,float param_1)

{
  long lVar1;
  void *pvVar2;
  IIRFilter *pIVar3;
  undefined8 *puVar4;
  uint *puVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  float fVar21;
  IIRCoefficients aIStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(float *)this = param_1;
  *(undefined4 *)(this + 4) = 0;
                    /* try { // try from 00b12e64 to 00b12e77 has its CatchHandler @ 00b132e0 */
  createMultiTapDelay(this,(MultiTapDelay *)(this + 8),0.4,2);
                    /* try { // try from 00b12e7c to 00b12e93 has its CatchHandler @ 00b132fc */
  createMultiTapDelay(this,(MultiTapDelay *)(this + 0x38),0.0797,0x12);
  puVar4 = *(undefined8 **)(this + 0x50);
  fVar21 = *(float *)this;
  if ((puVar4 < this + 0x44) && (this + 0x40 < puVar4 + 9)) {
    lVar6 = 0;
  }
  else {
    auVar15._0_4_ = (int)*(undefined8 *)(this + 0x40);
    auVar15._4_4_ = auVar15._0_4_;
    auVar15._8_4_ = auVar15._0_4_;
    auVar15._12_4_ = auVar15._0_4_;
    auVar20._0_4_ = auVar15._0_4_ + -1;
    auVar20._4_4_ = auVar15._0_4_ + -1;
    auVar20._8_4_ = auVar15._0_4_ + -1;
    auVar20._12_4_ = auVar15._0_4_ + -1;
    auVar9._0_4_ = (int)(SUB164(_DAT_004c5e00,0) * fVar21);
    auVar9._4_4_ = (int)(SUB164(_DAT_004c5e00,4) * fVar21);
    auVar9._8_4_ = (int)(SUB164(_DAT_004c5e00,8) * fVar21);
    auVar9._12_4_ = (int)(SUB164(_DAT_004c5e00,0xc) * fVar21);
    auVar16 = NEON_cmhi(auVar15,auVar9,4);
    auVar9 = NEON_bif(auVar9,auVar20,auVar16,1);
    puVar4[1] = auVar9._8_8_;
    *puVar4 = auVar9._0_8_;
    auVar17._0_4_ = (int)(fVar21 * 0.027);
    auVar17._4_4_ = (int)(fVar21 * 0.0298);
    auVar17._8_4_ = (int)(fVar21 * 0.0458);
    auVar17._12_4_ = (int)(fVar21 * 0.0485);
    auVar16._0_4_ = (int)*(undefined8 *)(this + 0x40);
    auVar16._4_4_ = auVar16._0_4_;
    auVar16._8_4_ = auVar16._0_4_;
    auVar16._12_4_ = auVar16._0_4_;
    auVar9 = NEON_cmhi(auVar16,auVar17,4);
    auVar10._0_4_ = auVar16._0_4_ + -1;
    auVar10._4_4_ = auVar16._0_4_ + -1;
    auVar10._8_4_ = auVar16._0_4_ + -1;
    auVar10._12_4_ = auVar16._0_4_ + -1;
    auVar9 = NEON_bit(auVar10,auVar17,auVar9,1);
    lVar6 = 0x10;
    puVar4[3] = auVar9._8_8_;
    puVar4[2] = auVar9._0_8_;
    auVar18._0_4_ = (int)(fVar21 * 0.0572);
    auVar18._4_4_ = (int)(fVar21 * 0.0587);
    auVar18._8_4_ = (int)(fVar21 * 0.0595);
    auVar18._12_4_ = (int)(fVar21 * 0.0612);
    auVar11._0_4_ = (int)*(undefined8 *)(this + 0x40);
    auVar11._4_4_ = auVar11._0_4_;
    auVar11._8_4_ = auVar11._0_4_;
    auVar11._12_4_ = auVar11._0_4_;
    auVar9 = NEON_cmhi(auVar11,auVar18,4);
    auVar12._0_4_ = auVar11._0_4_ + -1;
    auVar12._4_4_ = auVar11._0_4_ + -1;
    auVar12._8_4_ = auVar11._0_4_ + -1;
    auVar12._12_4_ = auVar11._0_4_ + -1;
    auVar9 = NEON_bit(auVar12,auVar18,auVar9,1);
    puVar4[5] = auVar9._8_8_;
    puVar4[4] = auVar9._0_8_;
    auVar19._0_4_ = (int)(fVar21 * 0.0707);
    auVar19._4_4_ = (int)(fVar21 * 0.0708);
    auVar19._8_4_ = (int)(fVar21 * 0.0726);
    auVar19._12_4_ = (int)(fVar21 * 0.0741);
    auVar13._0_4_ = (int)*(undefined8 *)(this + 0x40);
    auVar13._4_4_ = auVar13._0_4_;
    auVar13._8_4_ = auVar13._0_4_;
    auVar13._12_4_ = auVar13._0_4_;
    auVar9 = NEON_cmhi(auVar13,auVar19,4);
    auVar14._0_4_ = auVar13._0_4_ + -1;
    auVar14._4_4_ = auVar13._0_4_ + -1;
    auVar14._8_4_ = auVar13._0_4_ + -1;
    auVar14._12_4_ = auVar13._0_4_ + -1;
    auVar9 = NEON_bit(auVar14,auVar19,auVar9,1);
    puVar4[7] = auVar9._8_8_;
    puVar4[6] = auVar9._0_8_;
  }
  lVar6 = lVar6 << 2;
  do {
    uVar7 = (uint)(*(float *)((long)&s_earlyReflectionsDelayLengths + lVar6) * fVar21);
    if (*(uint *)(this + 0x40) <= uVar7) {
      uVar7 = *(uint *)(this + 0x40) - 1;
    }
    *(uint *)((long)puVar4 + lVar6) = uVar7;
    lVar6 = lVar6 + 4;
  } while (lVar6 != 0x48);
  iVar8 = (int)(fVar21 * 0.11);
  if (iVar8 == 0) {
    uVar7 = 1;
  }
  else {
    uVar7 = iVar8 - 1U | iVar8 - 1U >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = (uVar7 | uVar7 >> 0x10) + 1;
  }
                    /* try { // try from 00b12fec to 00b12ff3 has its CatchHandler @ 00b132f8 */
  pvVar2 = operator_new__((ulong)uVar7 << 2);
  *(void **)(this + 0x68) = pvVar2;
  *(int *)(this + 0x70) = iVar8;
  *(uint *)(this + 0x74) = uVar7 - 1;
  memset(pvVar2,0,(ulong)uVar7 << 2);
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  iVar8 = (int)(fVar21 * 0.15);
  if (iVar8 == 0) {
    uVar7 = 1;
  }
  else {
    uVar7 = iVar8 - 1U | iVar8 - 1U >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = (uVar7 | uVar7 >> 0x10) + 1;
  }
                    /* try { // try from 00b13064 to 00b1306b has its CatchHandler @ 00b132f8 */
  pvVar2 = operator_new__((ulong)uVar7 << 2);
  *(void **)(this + 0x78) = pvVar2;
  *(int *)(this + 0x80) = iVar8;
  *(uint *)(this + 0x84) = uVar7 - 1;
  memset(pvVar2,0,(ulong)uVar7 << 2);
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  iVar8 = (int)(fVar21 * 0.2305);
  if (iVar8 == 0) {
    uVar7 = 1;
  }
  else {
    uVar7 = iVar8 - 1U | iVar8 - 1U >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = (uVar7 | uVar7 >> 0x10) + 1;
  }
                    /* try { // try from 00b130dc to 00b130e3 has its CatchHandler @ 00b132f8 */
  pvVar2 = operator_new__((ulong)uVar7 << 2);
  *(void **)(this + 0x88) = pvVar2;
  *(int *)(this + 0x90) = iVar8;
  *(uint *)(this + 0x94) = uVar7 - 1;
  memset(pvVar2,0,(ulong)uVar7 << 2);
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  iVar8 = (int)(fVar21 * 0.34);
  if (iVar8 == 0) {
    uVar7 = 1;
  }
  else {
    uVar7 = iVar8 - 1U | iVar8 - 1U >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = (uVar7 | uVar7 >> 0x10) + 1;
  }
                    /* try { // try from 00b13154 to 00b1315b has its CatchHandler @ 00b132f8 */
  pvVar2 = operator_new__((ulong)uVar7 << 2);
  *(void **)(this + 0x98) = pvVar2;
  *(int *)(this + 0xa0) = iVar8;
  *(uint *)(this + 0xa4) = uVar7 - 1;
  memset(pvVar2,0,(ulong)uVar7 << 2);
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x110) = 0;
                    /* try { // try from 00b13184 to 00b1318b has its CatchHandler @ 00b132fc */
  pIVar3 = (IIRFilter *)operator_new(0x2c);
                    /* try { // try from 00b13190 to 00b131c3 has its CatchHandler @ 00b132e8 */
  IIRFilter::createHighShelf(pIVar3,fVar21,5000.0,1.0,0.7071068);
  IIRFilter::IIRFilter(pIVar3,aIStack_60);
  *(IIRFilter **)(this + 0x150) = pIVar3;
                    /* try { // try from 00b131c8 to 00b131cf has its CatchHandler @ 00b132fc */
  pIVar3 = (IIRFilter *)operator_new(0x2c);
                    /* try { // try from 00b131d8 to 00b13203 has its CatchHandler @ 00b132e4 */
  IIRFilter::createLowShelf(pIVar3,*(float *)this,250.0,1.0,0.7071068);
  IIRFilter::IIRFilter(pIVar3,aIStack_60);
  *(IIRFilter **)(this + 0x148) = pIVar3;
                    /* try { // try from 00b13208 to 00b132b3 has its CatchHandler @ 00b132fc */
  createMultiTapDelay(this,(MultiTapDelay *)(this + 0xa8),0.0495,3);
  fVar21 = *(float *)this;
  puVar5 = *(uint **)(this + 0xc0);
  uVar7 = (int)(fVar21 * 0.0165);
  if (*(uint *)(this + 0xb0) <= (uint)(int)(fVar21 * 0.0165)) {
    uVar7 = *(uint *)(this + 0xb0) - 1;
  }
  *puVar5 = uVar7;
  uVar7 = (int)(fVar21 * 0.033);
  if (*(uint *)(this + 0xb0) <= (uint)(int)(fVar21 * 0.033)) {
    uVar7 = *(uint *)(this + 0xb0) - 1;
  }
  puVar5[1] = uVar7;
  uVar7 = (int)(fVar21 * 0.0495);
  if (*(uint *)(this + 0xb0) <= (uint)(int)(fVar21 * 0.0495)) {
    uVar7 = *(uint *)(this + 0xb0) - 1;
  }
  puVar5[2] = uVar7;
  setPreset(this,(Preset *)s_defaultPreset);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


