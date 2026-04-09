// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PerturbOne
// Entry Point: 00a810fc
// Size: 980 bytes
// Signature: undefined __thiscall PerturbOne(D3DX_BC7 * this, EncodeParams * param_1, LDRColorA * param_2, ulong param_3, ulong param_4, ulong param_5, LDREndPntPair * param_6, LDREndPntPair * param_7, float param_8, uchar param_9)


/* BC6BC7Util::D3DX_BC7::PerturbOne(BC6BC7Util::D3DX_BC7::EncodeParams const*, BC6BC7Util::LDRColorA
   const*, unsigned long, unsigned long, unsigned long, BC6BC7Util::LDREndPntPair const&,
   BC6BC7Util::LDREndPntPair&, float, unsigned char) const */

float __thiscall
BC6BC7Util::D3DX_BC7::PerturbOne
          (D3DX_BC7 *this,EncodeParams *param_1,LDRColorA *param_2,ulong param_3,ulong param_4,
          ulong param_5,LDREndPntPair *param_6,LDREndPntPair *param_7,float param_8,uchar param_9)

{
  uint uVar1;
  uchar *puVar2;
  byte bVar3;
  uchar uVar4;
  uchar uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  uchar *puVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  ulong uVar15;
  uint uVar16;
  LDRColorA *pLVar17;
  char cVar18;
  uint uVar19;
  float extraout_s0;
  float extraout_s0_00;
  float fVar20;
  undefined8 local_c0;
  LDRColorA aLStack_b8 [64];
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  lVar8 = (ulong)(byte)*param_1 * 0xf;
  pbVar13 = &DAT_0051f9ab + lVar8;
  switch(param_5) {
  case 1:
    pbVar13 = &DAT_0051f9ac + lVar8;
    break;
  case 2:
    pbVar13 = &DAT_0051f9ad + lVar8;
    break;
  case 3:
    pbVar13 = &DAT_0051f9ae + lVar8;
  }
  local_c0 = *(undefined8 *)param_6;
  bVar3 = *pbVar13;
  *(undefined8 *)param_7 = local_c0;
  if (param_9 == '\0') {
    switch(param_5) {
    default:
      puVar14 = &local_c0;
      break;
    case 1:
      param_7 = param_7 + 1;
      puVar14 = (undefined8 *)((ulong)&local_c0 | 1);
      break;
    case 2:
      param_7 = param_7 + 2;
      puVar14 = (undefined8 *)((ulong)&local_c0 | 2);
      break;
    case 3:
      param_7 = param_7 + 3;
      puVar14 = (undefined8 *)((ulong)&local_c0 | 3);
    }
  }
  else {
    switch(param_5) {
    default:
      puVar14 = (undefined8 *)((ulong)&local_c0 | 4);
      param_7 = param_7 + 4;
      break;
    case 1:
      puVar14 = (undefined8 *)((ulong)&local_c0 | 5);
      param_7 = param_7 + 5;
      break;
    case 2:
      param_7 = param_7 + 6;
      puVar14 = (undefined8 *)((ulong)&local_c0 | 6);
      break;
    case 3:
      param_7 = param_7 + 7;
      puVar14 = (undefined8 *)((ulong)&local_c0 | 7);
    }
  }
  iVar6 = 1 << (ulong)(bVar3 & 0x1f);
  uVar16 = 1 << (ulong)(bVar3 - 1 & 0x1f);
  do {
    iVar12 = (byte)*param_7 - uVar16;
    if ((iVar12 < 0) || (iVar6 <= iVar12)) {
      bVar10 = false;
      uVar19 = 0;
      cVar18 = '\0';
      iVar12 = uVar16 + (byte)*param_7;
      if (-1 < iVar12) goto LAB_00a813a4;
LAB_00a8144c:
      if (bVar10) {
LAB_00a8129c:
        *param_7 = (LDREndPntPair)((char)*param_7 + cVar18);
      }
    }
    else {
      uVar19 = -uVar16;
      puVar2 = &DAT_0051f9a6 + (ulong)(byte)*param_1 * 0xf;
      puVar9 = &DAT_0051f9a5 + (ulong)(byte)*param_1 * 0xf;
      if (param_4 != 0) {
        puVar2 = &DAT_0051f9a5 + (ulong)(byte)*param_1 * 0xf;
        puVar9 = &DAT_0051f9a6 + (ulong)(byte)*param_1 * 0xf;
      }
      uVar4 = *puVar2;
      uVar5 = *puVar9;
      *(char *)puVar14 = (char)iVar12;
      this = (D3DX_BC7 *)
             GeneratePaletteQuantized(this,param_1,param_4,(LDREndPntPair *)&local_c0,aLStack_b8);
      if (param_3 == 0) {
        fVar20 = 0.0;
      }
      else {
        fVar20 = 0.0;
        uVar15 = param_3;
        pLVar17 = param_2;
        do {
          this = (D3DX_BC7 *)ComputeError(pLVar17,aLStack_b8,uVar5,uVar4,(ulong *)0x0,(ulong *)0x0);
          fVar20 = fVar20 + extraout_s0;
          if (param_8 < fVar20) {
            fVar20 = 3.402823e+38;
            break;
          }
          uVar15 = uVar15 - 1;
          pLVar17 = pLVar17 + 4;
        } while (uVar15 != 0);
      }
      bVar10 = fVar20 < param_8;
      if (!bVar10) {
        uVar19 = 0;
        fVar20 = param_8;
      }
      param_8 = fVar20;
      cVar18 = (char)uVar19;
      iVar12 = uVar16 + (byte)*param_7;
      if (iVar12 < 0) goto LAB_00a8144c;
LAB_00a813a4:
      cVar18 = (char)uVar19;
      if (iVar6 <= iVar12) goto LAB_00a8144c;
      puVar2 = &DAT_0051f9a6 + (ulong)(byte)*param_1 * 0xf;
      puVar9 = &DAT_0051f9a5 + (ulong)(byte)*param_1 * 0xf;
      if (param_4 != 0) {
        puVar2 = &DAT_0051f9a5 + (ulong)(byte)*param_1 * 0xf;
        puVar9 = &DAT_0051f9a6 + (ulong)(byte)*param_1 * 0xf;
      }
      uVar4 = *puVar2;
      uVar5 = *puVar9;
      *(char *)puVar14 = (char)iVar12;
      this = (D3DX_BC7 *)
             GeneratePaletteQuantized(this,param_1,param_4,(LDREndPntPair *)&local_c0,aLStack_b8);
      if (param_3 == 0) {
        fVar20 = 0.0;
      }
      else {
        fVar20 = 0.0;
        uVar15 = param_3;
        pLVar17 = param_2;
        do {
          this = (D3DX_BC7 *)ComputeError(pLVar17,aLStack_b8,uVar5,uVar4,(ulong *)0x0,(ulong *)0x0);
          fVar20 = fVar20 + extraout_s0_00;
          if (param_8 < fVar20) {
            fVar20 = 3.402823e+38;
            break;
          }
          uVar15 = uVar15 - 1;
          pLVar17 = pLVar17 + 4;
        } while (uVar15 != 0);
      }
      bVar11 = fVar20 < param_8;
      if (!bVar11) {
        fVar20 = param_8;
      }
      param_8 = fVar20;
      uVar1 = uVar16;
      if (!bVar11) {
        uVar1 = uVar19;
      }
      cVar18 = (char)uVar1;
      if ((bool)(bVar11 | bVar10)) goto LAB_00a8129c;
    }
    bVar10 = uVar16 < 2;
    uVar16 = (int)uVar16 >> 1;
    if (bVar10) {
      if (*(long *)(lVar7 + 0x28) == local_78) {
        return param_8;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


