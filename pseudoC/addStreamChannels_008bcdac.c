// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addStreamChannels
// Entry Point: 008bcdac
// Size: 796 bytes
// Signature: undefined __thiscall addStreamChannels(SoundPlayer * this, DomXMLFile * param_1)


/* SoundPlayer::addStreamChannels(DomXMLFile&) */

void __thiscall SoundPlayer::addStreamChannels(SoundPlayer *this,DomXMLFile *param_1)

{
  SoundPlayer *__s2;
  size_t sVar1;
  SoundPlayer SVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  char *__s;
  size_t sVar9;
  void *__dest;
  undefined8 extraout_x1;
  ulong uVar10;
  SoundPlayer *pSVar11;
  SoundPlayer *pSVar12;
  ulong uVar13;
  byte *pbVar14;
  int iVar15;
  ulong uVar16;
  undefined auVar17 [16];
  ushort local_1b8;
  undefined local_1b6;
  void *local_1a8;
  byte *local_1a0;
  byte *local_198;
  undefined8 local_190;
  undefined8 local_188;
  size_t local_180;
  void *local_178;
  undefined auStack_170 [128];
  undefined auStack_f0 [128];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  iVar7 = DomXMLFile::getNumChildren(param_1,"streamingInternetRadios");
  if (iVar7 != 0) {
    iVar15 = 0;
    do {
      FUN_008bd0fc(auStack_f0);
      FUN_008bd0fc(auStack_170,extraout_x1,"%s#href",auStack_f0);
      auVar17 = (**(code **)(*(long *)param_1 + 0x10))(param_1,auStack_170,0);
      if (auVar17._0_8_ != 0) {
        FUN_008bd0fc(auStack_170,auVar17._8_8_,"%s#language",auStack_f0);
        __s = (char *)(**(code **)(*(long *)param_1 + 0x10))(param_1,auStack_170,0);
        if (__s != (char *)0x0) {
          sVar9 = strlen(__s);
          if (0xffffffffffffffef < sVar9) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (sVar9 < 0x17) {
            local_188 = CONCAT71(local_188._1_7_,(char)((int)sVar9 << 1));
            __dest = (void *)((ulong)&local_188 | 1);
            if (sVar9 != 0) goto LAB_008bcf00;
          }
          else {
            uVar13 = sVar9 + 0x10 & 0xfffffffffffffff0;
            __dest = operator_new(uVar13);
            local_188 = uVar13 | 1;
            local_180 = sVar9;
            local_178 = __dest;
LAB_008bcf00:
            memcpy(__dest,__s,sVar9);
          }
          *(undefined *)((long)__dest + sVar9) = 0;
          local_1a0 = (byte *)0x0;
          local_198 = (byte *)0x0;
          local_190 = 0;
          local_1b8 = 0x2002;
          local_1b6 = 0;
                    /* try { // try from 008bcf28 to 008bcf3f has its CatchHandler @ 008bd0c8 */
          StringUtil::split((basic_string *)&local_188,(basic_string *)&local_1b8,
                            (vector *)&local_1a0,true,true);
          if ((local_1b8 & 1) != 0) {
            operator_delete(local_1a8);
          }
          pbVar14 = local_198;
          pbVar6 = local_1a0;
          __s2 = this + 0xa1;
          sVar9 = (ulong)((byte)this[0xa0] >> 1);
          if (((byte)this[0xa0] & 1) != 0) {
            __s2 = *(SoundPlayer **)(this + 0xb0);
            sVar9 = *(size_t *)(this + 0xa8);
          }
          pbVar4 = pbVar6;
          if ((long)local_198 - (long)local_1a0 != 0) {
            uVar13 = 0;
            uVar16 = ((long)local_198 - (long)local_1a0 >> 3) * -0x5555555555555555;
            do {
              pSVar11 = (SoundPlayer *)(pbVar6 + uVar13 * 0x18);
              SVar2 = *pSVar11;
              uVar10 = (ulong)((byte)SVar2 >> 1);
              sVar1 = uVar10;
              if (((byte)SVar2 & 1) != 0) {
                sVar1 = *(size_t *)(pSVar11 + 8);
              }
              if (sVar1 == sVar9) {
                pSVar12 = *(SoundPlayer **)(pbVar6 + uVar13 * 0x18 + 0x10);
                if (((byte)SVar2 & 1) == 0) {
                  pSVar12 = pSVar11 + 1;
                }
                if (((byte)SVar2 & 1) == 0) {
                  pSVar12 = __s2;
                  if (sVar9 == 0) goto joined_r0x008bd034;
                  while (pSVar11 = pSVar11 + 1, *pSVar11 == *pSVar12) {
                    uVar10 = uVar10 - 1;
                    pSVar12 = pSVar12 + 1;
                    if (uVar10 == 0) goto LAB_008bd02c;
                  }
                }
                else if ((sVar9 == 0) || (iVar8 = memcmp(pSVar12,__s2,sVar9), iVar8 == 0))
                goto joined_r0x008bd034;
              }
              uVar13 = (ulong)((int)uVar13 + 1);
            } while (uVar13 <= uVar16 && uVar16 - uVar13 != 0);
          }
LAB_008bd02c:
          if (pbVar6 != (byte *)0x0) {
joined_r0x008bd034:
            while (pbVar5 = pbVar14, pbVar5 != pbVar6) {
              pbVar14 = pbVar5 + -0x18;
              pbVar4 = local_1a0;
              if ((*pbVar14 & 1) != 0) {
                operator_delete(*(void **)(pbVar5 + -8));
                pbVar4 = local_1a0;
              }
            }
            local_198 = pbVar6;
            operator_delete(pbVar4);
          }
          if ((local_188 & 1) != 0) {
            operator_delete(local_178);
          }
        }
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 != iVar7);
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


