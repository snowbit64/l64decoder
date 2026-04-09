// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadConfig
// Entry Point: 0074b4d0
// Size: 1076 bytes
// Signature: undefined __thiscall loadConfig(CollisionEffectManager * this, char * param_1)


/* CollisionEffectManager::loadConfig(char const*) */

byte __thiscall CollisionEffectManager::loadConfig(CollisionEffectManager *this,char *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  void *pvVar9;
  long lVar10;
  byte bVar11;
  ulong uVar12;
  char *pcVar13;
  long lVar14;
  float fVar15;
  undefined4 uVar16;
  byte local_198 [16];
  void *local_188;
  ulong local_180;
  ulong uStack_178;
  char *local_170;
  ulong local_160;
  ulong uStack_158;
  void *local_150;
  DomXMLFile aDStack_148 [216];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  stopEffects();
  unloadConfig();
  DomXMLFile::DomXMLFile(aDStack_148);
                    /* try { // try from 0074b518 to 0074b527 has its CatchHandler @ 0074b908 */
  uVar6 = DomXMLFile::loadFromFile(aDStack_148,param_1,true);
  if ((uVar6 & 1) == 0) {
    bVar11 = 0;
  }
  else {
                    /* try { // try from 0074b52c to 0074b577 has its CatchHandler @ 0074b904 */
    uVar5 = DomXMLFile::getNumElements(aDStack_148,"collisionEffects.collisionEfffect");
    uVar12 = (ulong)uVar5;
    lVar10 = *(long *)(this + 8) - *(long *)this >> 3;
    uVar6 = lVar10 * -0x71c71c71c71c71c7;
    if (uVar12 <= uVar6) {
      if (uVar12 <= uVar6 && uVar6 - uVar12 != 0) {
        lVar14 = *(long *)this + uVar12 * 0x48;
        lVar10 = *(long *)(this + 8);
        while (lVar3 = lVar10, lVar3 != lVar14) {
          pvVar9 = *(void **)(lVar3 + -0x18);
          if (pvVar9 != (void *)0x0) {
            *(void **)(lVar3 + -0x10) = pvVar9;
            operator_delete(pvVar9);
          }
          pvVar9 = *(void **)(lVar3 + -0x30);
          lVar10 = lVar3 + -0x48;
          if (pvVar9 != (void *)0x0) {
            *(void **)(lVar3 + -0x28) = pvVar9;
            operator_delete(pvVar9);
          }
        }
        *(long *)(this + 8) = lVar14;
      }
    }
    else {
      std::__ndk1::
      vector<CollisionEffectManager::EffectModel,std::__ndk1::allocator<CollisionEffectManager::EffectModel>>
      ::__append((vector<CollisionEffectManager::EffectModel,std::__ndk1::allocator<CollisionEffectManager::EffectModel>>
                  *)this,uVar12 + lVar10 * 0x71c71c71c71c71c7);
    }
    if (uVar5 == 0) {
      bVar4 = false;
    }
    else {
      lVar10 = 0;
      pcVar13 = (char *)((ulong)&local_180 | 1);
      uVar6 = 0;
      bVar4 = true;
      do {
        lVar14 = *(long *)this;
                    /* try { // try from 0074b5c0 to 0074b5cb has its CatchHandler @ 0074b9bc */
        std::__ndk1::to_string((uint)uVar6);
                    /* try { // try from 0074b5cc to 0074b5df has its CatchHandler @ 0074b954 */
        puVar7 = (ulong *)std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::insert((ulong)local_198,(char *)0x0);
        local_170 = (char *)puVar7[2];
        uStack_178 = puVar7[1];
        local_180 = *puVar7;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
                    /* try { // try from 0074b5f8 to 0074b607 has its CatchHandler @ 0074b93c */
        puVar7 = (ulong *)std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::append((char *)&local_180);
        local_150 = (void *)puVar7[2];
        uStack_158 = puVar7[1];
        local_160 = *puVar7;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        if ((local_180 & 1) != 0) {
          operator_delete(local_170);
        }
        if ((local_198[0] & 1) != 0) {
          operator_delete(local_188);
        }
                    /* try { // try from 0074b640 to 0074b653 has its CatchHandler @ 0074b920 */
        FUN_006cadd8(&local_180,&local_160,"#minImpactVelocity");
        pcVar1 = pcVar13;
        if ((local_180 & 1) != 0) {
          pcVar1 = local_170;
        }
                    /* try { // try from 0074b66c to 0074b673 has its CatchHandler @ 0074b988 */
        fVar15 = (float)Properties::getFloat
                                  ((Properties *)aDStack_148,pcVar1,*(float *)(lVar14 + lVar10 + 4))
        ;
        *(float *)(lVar14 + lVar10 + 4) = fVar15 * fVar15;
        if ((local_180 & 1) != 0) {
          operator_delete(local_170);
        }
                    /* try { // try from 0074b68c to 0074b69f has its CatchHandler @ 0074b980 */
        FUN_006cadd8(&local_180,&local_160,"#minSlidingVelocity");
        pcVar1 = pcVar13;
        if ((local_180 & 1) != 0) {
          pcVar1 = local_170;
        }
                    /* try { // try from 0074b6b8 to 0074b6bf has its CatchHandler @ 0074b938 */
        fVar15 = (float)Properties::getFloat
                                  ((Properties *)aDStack_148,pcVar1,*(float *)(lVar14 + lVar10 + 8))
        ;
        *(float *)(lVar14 + lVar10 + 8) = fVar15 * fVar15;
        if ((local_180 & 1) != 0) {
          operator_delete(local_170);
        }
                    /* try { // try from 0074b6d8 to 0074b6eb has its CatchHandler @ 0074b918 */
        FUN_006cadd8(&local_180,&local_160,"#maxVolumeVelocity");
        pcVar1 = pcVar13;
        if ((local_180 & 1) != 0) {
          pcVar1 = local_170;
        }
                    /* try { // try from 0074b704 to 0074b70b has its CatchHandler @ 0074b97c */
        fVar15 = (float)Properties::getFloat
                                  ((Properties *)aDStack_148,pcVar1,
                                   *(float *)(lVar14 + lVar10 + 0x10));
        *(float *)(lVar14 + lVar10 + 0x10) = fVar15 * fVar15;
        if ((local_180 & 1) != 0) {
          operator_delete(local_170);
        }
                    /* try { // try from 0074b724 to 0074b737 has its CatchHandler @ 0074b974 */
        FUN_006cadd8(&local_180,&local_160,"#maxPitchVelocity");
        pcVar1 = pcVar13;
        if ((local_180 & 1) != 0) {
          pcVar1 = local_170;
        }
                    /* try { // try from 0074b750 to 0074b757 has its CatchHandler @ 0074b934 */
        fVar15 = (float)Properties::getFloat
                                  ((Properties *)aDStack_148,pcVar1,
                                   *(float *)(lVar14 + lVar10 + 0x14));
        *(float *)(lVar14 + lVar10 + 0x14) = fVar15 * fVar15;
        if ((local_180 & 1) != 0) {
          operator_delete(local_170);
        }
                    /* try { // try from 0074b770 to 0074b783 has its CatchHandler @ 0074b92c */
        FUN_006cadd8(&local_180,&local_160,"#maxImpactAngle");
        pcVar1 = pcVar13;
        if ((local_180 & 1) != 0) {
          pcVar1 = local_170;
        }
                    /* try { // try from 0074b79c to 0074b7a3 has its CatchHandler @ 0074b970 */
        uVar16 = Properties::getFloat
                           ((Properties *)aDStack_148,pcVar1,*(float *)(lVar14 + lVar10 + 0xc));
        *(undefined4 *)(lVar14 + lVar10 + 0xc) = uVar16;
        if ((local_180 & 1) != 0) {
          operator_delete(local_170);
        }
                    /* try { // try from 0074b7b8 to 0074b7cb has its CatchHandler @ 0074b968 */
        FUN_006cadd8(&local_180,&local_160,".impactSound");
                    /* try { // try from 0074b7d4 to 0074b7df has its CatchHandler @ 0074b928 */
        uVar8 = loadSoundDescs((vector *)(lVar14 + lVar10 + 0x18),aDStack_148,
                               (basic_string *)&local_180);
        if ((local_180 & 1) != 0) {
          operator_delete(local_170);
        }
        if ((uVar8 & 1) == 0) {
          if ((local_160 & 1) != 0) {
            operator_delete(local_150);
          }
          break;
        }
                    /* try { // try from 0074b7f8 to 0074b80b has its CatchHandler @ 0074b910 */
        FUN_006cadd8(&local_180,&local_160,".slidingSound");
                    /* try { // try from 0074b814 to 0074b81f has its CatchHandler @ 0074b90c */
        uVar8 = loadSoundDescs((vector *)(lVar14 + lVar10 + 0x30),aDStack_148,
                               (basic_string *)&local_180);
        if ((local_180 & 1) != 0) {
          operator_delete(local_170);
        }
        if ((local_160 & 1) != 0) {
          operator_delete(local_150);
        }
        if ((uVar8 & 1) == 0) break;
        uVar6 = uVar6 + 1;
        lVar10 = lVar10 + 0x48;
        bVar4 = uVar6 < uVar12;
      } while (uVar12 * 0x48 - lVar10 != 0);
    }
    bVar11 = bVar4 ^ 1;
  }
  DomXMLFile::~DomXMLFile(aDStack_148);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return bVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


