// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: acquireData
// Entry Point: 00b11040
// Size: 504 bytes
// Signature: undefined __thiscall acquireData(SoftAudioStaticOggReader * this, AudioBlock * param_1, uint * param_2, uint param_3)


/* SoftAudioStaticOggReader::acquireData(ISoftAudioReader::AudioBlock&, unsigned int&, unsigned int)
    */

void __thiscall
SoftAudioStaticOggReader::acquireData
          (SoftAudioStaticOggReader *this,AudioBlock *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long local_58 [3];
  
  lVar2 = tpidr_el0;
  local_58[2] = *(long *)(lVar2 + 0x28);
  iVar3 = FUN_00f276a0(0xffffffff,this + 0x34);
  if (iVar3 == -1) {
    if (this[0x30] != (SoftAudioStaticOggReader)0x0) {
      uVar5 = 0;
      goto LAB_00b1120c;
    }
  }
  else {
    stb_vorbis_seek(*(undefined8 *)(this + 0x10),iVar3);
    *(int *)(this + 0x2c) = iVar3;
    this[0x30] = (SoftAudioStaticOggReader)0x0;
  }
  uVar1 = *(uint *)(this + 0x18);
  uVar6 = (ulong)uVar1;
  lVar7 = *(long *)(this + 0x20);
  if (uVar1 != 0) {
    if (uVar1 < 4) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar6 & 0xfffffffc;
      plVar10 = local_58 + 2;
      lVar12 = 1;
      lVar9 = 0;
      uVar11 = uVar8;
      do {
        uVar13 = lVar9 * 0x1000;
        uVar14 = lVar12 * 0x1000;
        uVar11 = uVar11 - 4;
        lVar9 = lVar9 + 4;
        lVar12 = lVar12 + 4;
        plVar10[-1] = lVar7 + (uVar14 >> 8 & 0xffffff) * 0x400;
        plVar10[-2] = lVar7 + (uVar13 >> 8 & 0xffffff) * 0x400;
        plVar10[1] = lVar7 + (uVar14 + 0x2000 >> 8 & 0xffffff) * 0x400;
        *plVar10 = lVar7 + (uVar13 + 0x2000 >> 8 & 0xffffff) * 0x400;
        plVar10 = plVar10 + 4;
      } while (uVar11 != 0);
      if (uVar8 == uVar6) goto LAB_00b11164;
    }
    uVar11 = uVar8 << 0xc;
    lVar9 = uVar6 - uVar8;
    plVar10 = local_58 + uVar8;
    do {
      uVar8 = uVar11 & 0xfffff000;
      uVar11 = uVar11 + 0x1000;
      lVar9 = lVar9 + -1;
      *plVar10 = lVar7 + uVar8 * 4;
      plVar10 = plVar10 + 1;
    } while (lVar9 != 0);
  }
LAB_00b11164:
  *(long *)param_1 = lVar7;
  *(undefined4 *)(param_1 + 8) = 0x1000;
  uVar5 = stb_vorbis_get_samples_float(*(undefined8 *)(this + 0x10),uVar6,local_58,0x1000);
  *(int *)(param_1 + 0xc) = (int)uVar5;
  iVar3 = *(int *)(this + 0x2c);
  *(int *)(param_1 + 0x10) = iVar3;
  if ((int)uVar5 == 0) {
    uVar1 = *param_2;
    *param_2 = uVar1 + 1;
    if ((param_3 == 0) || (uVar1 + 1 != param_3)) {
      stb_vorbis_seek_start(*(undefined8 *)(this + 0x10));
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined8 *)param_1 = *(undefined8 *)(this + 0x20);
      *(undefined4 *)(param_1 + 8) = 0x1000;
      uVar5 = stb_vorbis_get_samples_float
                        (*(undefined8 *)(this + 0x10),*(undefined4 *)(this + 0x18),local_58,0x1000);
      *(int *)(param_1 + 0xc) = (int)uVar5;
      iVar3 = *(int *)(this + 0x2c);
      *(int *)(param_1 + 0x10) = iVar3;
      if ((int)uVar5 != 0) goto LAB_00b11190;
    }
    else {
      uVar5 = 0;
    }
    this[0x30] = (SoftAudioStaticOggReader)0x1;
  }
  else {
LAB_00b11190:
    iVar4 = (int)uVar5;
    uVar5 = 1;
    *(int *)(this + 0x2c) = iVar3 + iVar4;
  }
LAB_00b1120c:
  if (*(long *)(lVar2 + 0x28) != local_58[2]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


