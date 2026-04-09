// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadGrowthStateFromFile
// Entry Point: 008549d8
// Size: 760 bytes
// Signature: undefined __thiscall loadGrowthStateFromFile(FieldCropsUpdater * this, char * param_1)


/* FieldCropsUpdater::loadGrowthStateFromFile(char const*) */

uint __thiscall FieldCropsUpdater::loadGrowthStateFromFile(FieldCropsUpdater *this,char *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined auVar4 [16];
  uint uVar5;
  uint uVar7;
  undefined4 uVar6;
  char *pcVar8;
  ulong uVar9;
  undefined8 extraout_x1;
  undefined8 uVar10;
  undefined8 extraout_x1_00;
  uint *puVar11;
  undefined (*pauVar12) [16];
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  float fVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint5 uVar25;
  undefined auVar26 [16];
  uint5 uVar27;
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  uint local_354;
  uchar *local_350;
  bool local_344 [4];
  char acStack_340 [512];
  DomXMLFile aDStack_140 [216];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  DomXMLFile::DomXMLFile(aDStack_140);
                    /* try { // try from 00854a14 to 00854a23 has its CatchHandler @ 00854cdc */
  uVar5 = DomXMLFile::loadFromFile(aDStack_140,param_1,true);
  if ((uVar5 & 1) != 0) {
    local_344[0] = false;
                    /* try { // try from 00854a34 to 00854a73 has its CatchHandler @ 00854ce0 */
    uVar6 = Properties::getUInt((Properties *)aDStack_140,"foliageCropsUpdater#currentGrowthIndex",
                                *(uint *)(this + 0xd00));
    *(undefined4 *)(this + 0xd00) = uVar6;
    uVar6 = Properties::getUInt((Properties *)aDStack_140,
                                "foliageCropsUpdater#applyGrowthCurrentIndex",
                                *(uint *)(this + 0xd14));
    *(undefined4 *)(this + 0xd14) = uVar6;
    uVar6 = Properties::getFloat
                      ((Properties *)aDStack_140,"foliageCropsUpdater#applyGrowthMaxTimePerFrame",
                       *(float *)(this + 0xd20));
    iVar17 = 0;
    *(undefined4 *)(this + 0xd20) = uVar6;
    uVar10 = extraout_x1;
    while( true ) {
                    /* try { // try from 00854a98 to 00854aa7 has its CatchHandler @ 00854cf0 */
      FUN_00854d04(acStack_340,uVar10,"foliageCropsUpdater.cropsState(%u)#index",iVar17);
                    /* try { // try from 00854aa8 to 00854ab7 has its CatchHandler @ 00854cec */
      auVar30 = Properties::getUInt((Properties *)aDStack_140,acStack_340,local_344);
      uVar10 = auVar30._8_8_;
      if (local_344[0] == false) break;
      uVar15 = auVar30._0_8_ & 0xffffffff;
      if ((auVar30._0_4_ <= *(uint *)(this + 0x58)) && (*(int *)(this + uVar15 * 100 + 0x60) != 0))
      {
                    /* try { // try from 00854adc to 00854aeb has its CatchHandler @ 00854ce8 */
        FUN_00854d04(acStack_340,uVar10,"foliageCropsUpdater.cropsState(%u)#normalizedGrowthTimer",
                     iVar17);
                    /* try { // try from 00854aec to 00854afb has its CatchHandler @ 00854ce4 */
        fVar16 = (float)Properties::getFloat((Properties *)aDStack_140,acStack_340,local_344);
        uVar10 = extraout_x1_00;
        if (local_344[0] != false) {
          *(float *)(this + uVar15 * 100 + 0x74) = fVar16 * *(float *)(this + uVar15 * 100 + 0x7c);
        }
      }
      iVar17 = iVar17 + 1;
    }
    iVar17 = *(int *)(this + 0xd0c);
                    /* try { // try from 00854b20 to 00854b33 has its CatchHandler @ 00854cd8 */
    uVar7 = Properties::getUInt((Properties *)aDStack_140,"foliageCropsUpdater.growthMasks#numCells"
                                ,0);
    uVar2 = iVar17 * iVar17;
    uVar15 = (ulong)uVar2;
                    /* try { // try from 00854b40 to 00854b53 has its CatchHandler @ 00854cd0 */
    if ((uVar7 == uVar2) &&
       (pcVar8 = (char *)DomXMLFile::getValue(aDStack_140,"foliageCropsUpdater.growthMasks",false),
       pcVar8 != (char *)0x0)) {
      local_350 = (uchar *)0x0;
      local_354 = 0;
                    /* try { // try from 00854b60 to 00854b8b has its CatchHandler @ 00854cd4 */
      StringUtil::base64Decode(pcVar8,false,&local_350,&local_354);
      if (local_350 != (uchar *)0x0) {
        uVar9 = LZMACompressionUtil::decompress
                          (local_350,local_354,*(uchar **)(this + 0xcf8),(uint)(uVar15 << 2));
        if ((uVar9 & 1) == 0) {
          memset(*(void **)(this + 0xcf8),0,uVar15 << 2);
        }
        if (local_350 != (uchar *)0x0) {
          operator_delete__(local_350);
        }
        uVar7 = 0;
        uVar1 = *(uint *)(this + 0x58);
        uVar9 = uVar15 & 0xfffffff8;
        do {
          if (*(int *)(this + (ulong)uVar7 * 100 + 0x60) != 0) {
            if (uVar2 == 0) {
              iVar17 = 0;
            }
            else {
              if (uVar2 < 8) {
                iVar17 = 0;
                uVar13 = 0;
              }
              else {
                iVar17 = 0;
                iVar18 = 0;
                iVar19 = 0;
                iVar20 = 0;
                pauVar12 = (undefined (*) [16])(*(long *)(this + 0xcf8) + 0x10);
                iVar21 = 0;
                iVar22 = 0;
                iVar23 = 0;
                iVar24 = 0;
                uVar13 = uVar9;
                do {
                  auVar28 = pauVar12[-1];
                  auVar4 = *pauVar12;
                  auVar30._4_4_ = uVar7;
                  auVar30._0_4_ = uVar7;
                  auVar30._8_4_ = uVar7;
                  auVar30._12_4_ = uVar7;
                  auVar29 = NEON_neg(auVar30,4);
                  pauVar12 = pauVar12 + 2;
                  uVar13 = uVar13 - 8;
                  auVar26[0] = ~auVar28[0];
                  auVar26[1] = ~auVar28[1];
                  auVar26[2] = ~auVar28[2];
                  auVar26[3] = ~auVar28[3];
                  auVar26[4] = ~auVar28[4];
                  auVar26[5] = ~auVar28[5];
                  auVar26[6] = ~auVar28[6];
                  auVar26[7] = ~auVar28[7];
                  auVar26[8] = ~auVar28[8];
                  auVar26[9] = ~auVar28[9];
                  auVar26[10] = ~auVar28[10];
                  auVar26[11] = ~auVar28[11];
                  auVar26[12] = ~auVar28[12];
                  auVar26[13] = ~auVar28[13];
                  auVar26[14] = ~auVar28[14];
                  auVar26[15] = ~auVar28[15];
                  auVar28[0] = ~auVar4[0];
                  auVar28[1] = ~auVar4[1];
                  auVar28[2] = ~auVar4[2];
                  auVar28[3] = ~auVar4[3];
                  auVar28[4] = ~auVar4[4];
                  auVar28[5] = ~auVar4[5];
                  auVar28[6] = ~auVar4[6];
                  auVar28[7] = ~auVar4[7];
                  auVar28[8] = ~auVar4[8];
                  auVar28[9] = ~auVar4[9];
                  auVar28[10] = ~auVar4[10];
                  auVar28[11] = ~auVar4[11];
                  auVar28[12] = ~auVar4[12];
                  auVar28[13] = ~auVar4[13];
                  auVar28[14] = ~auVar4[14];
                  auVar28[15] = ~auVar4[15];
                  auVar30 = NEON_ushl(auVar26,auVar29,4);
                  auVar28 = NEON_ushl(auVar28,auVar29,4);
                  uVar25 = CONCAT14(auVar30[4],(uint)(auVar30[0] & 1)) & 0x1ffffffff;
                  uVar27 = CONCAT14(auVar28[4],(uint)(auVar28[0] & 1)) & 0x1ffffffff;
                  iVar17 = (int)uVar25 + iVar17;
                  iVar18 = (uint)(byte)(uVar25 >> 0x20) + iVar18;
                  iVar19 = (uint)(auVar30[8] & 1) + iVar19;
                  iVar20 = (uint)(auVar30[12] & 1) + iVar20;
                  iVar21 = (int)uVar27 + iVar21;
                  iVar22 = (uint)(byte)(uVar27 >> 0x20) + iVar22;
                  iVar23 = (uint)(auVar28[8] & 1) + iVar23;
                  iVar24 = (uint)(auVar28[12] & 1) + iVar24;
                } while (uVar13 != 0);
                iVar17 = iVar21 + iVar17 + iVar22 + iVar18 + iVar23 + iVar19 + iVar24 + iVar20;
                uVar13 = uVar9;
                if (uVar9 == uVar15) goto LAB_00854bc8;
              }
              lVar14 = uVar15 - uVar13;
              puVar11 = (uint *)(*(long *)(this + 0xcf8) + uVar13 * 4);
              do {
                lVar14 = lVar14 + -1;
                iVar17 = (~*puVar11 >> (ulong)(uVar7 & 0x1f) & 1) + iVar17;
                puVar11 = puVar11 + 1;
              } while (lVar14 != 0);
            }
LAB_00854bc8:
            *(int *)(this + (ulong)uVar7 * 100 + 0x78) = iVar17;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 <= uVar1);
      }
    }
  }
  DomXMLFile::~DomXMLFile(aDStack_140);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5 & 1;
}


