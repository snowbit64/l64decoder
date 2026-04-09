// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: OptimizeOne
// Entry Point: 00a81b74
// Size: 1080 bytes
// Signature: undefined __thiscall OptimizeOne(D3DX_BC7 * this, EncodeParams * param_1, LDRColorA * param_2, ulong param_3, ulong param_4, float param_5, LDREndPntPair * param_6, LDREndPntPair * param_7)


/* BC6BC7Util::D3DX_BC7::OptimizeOne(BC6BC7Util::D3DX_BC7::EncodeParams const*,
   BC6BC7Util::LDRColorA const*, unsigned long, unsigned long, float, BC6BC7Util::LDREndPntPair
   const&, BC6BC7Util::LDREndPntPair&) const */

void __thiscall
BC6BC7Util::D3DX_BC7::OptimizeOne
          (D3DX_BC7 *this,EncodeParams *param_1,LDRColorA *param_2,ulong param_3,ulong param_4,
          float param_5,LDREndPntPair *param_6,LDREndPntPair *param_7)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  bool bVar5;
  D3DX_BC7 *pDVar6;
  LDREndPntPair *pLVar7;
  LDREndPntPair *pLVar8;
  LDREndPntPair *pLVar9;
  LDREndPntPair *pLVar10;
  LDREndPntPair *pLVar11;
  LDREndPntPair *pLVar12;
  uchar uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  LDREndPntPair aLStack_a0 [8];
  LDREndPntPair aLStack_98 [8];
  LDREndPntPair aLStack_90 [12];
  float local_84;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  uVar14 = 0;
  *(undefined8 *)param_7 = *(undefined8 *)param_6;
  do {
    lVar3 = (ulong)(byte)*param_1 * 0xf;
    puVar4 = &DAT_0051f9ab;
    switch(uVar14) {
    case 1:
      cVar1 = (&DAT_0051f9ac)[lVar3];
      break;
    case 2:
      puVar4 = &DAT_0051f9ad;
    default:
      cVar1 = puVar4[lVar3];
      break;
    case 3:
      cVar1 = (&DAT_0051f9ae)[lVar3];
    }
    if (cVar1 != '\0') {
      fVar15 = (float)PerturbOne(this,param_1,param_2,param_3,param_4,uVar14,param_7,aLStack_90,
                                 param_5,'\0');
      fVar16 = (float)PerturbOne(this,param_1,param_2,param_3,param_4,uVar14,param_7,aLStack_98,
                                 param_5,'\x01');
      pLVar7 = (LDREndPntPair *)((ulong)aLStack_90 | 3);
      pLVar9 = param_7 + 3;
      pLVar11 = param_7 + 7;
      pLVar12 = (LDREndPntPair *)((ulong)aLStack_90 | 7);
      if (((uVar14 != 3) &&
          (pLVar7 = (LDREndPntPair *)((ulong)aLStack_90 | 2), pLVar9 = param_7 + 2,
          pLVar11 = param_7 + 6, pLVar12 = (LDREndPntPair *)((ulong)aLStack_90 | 6), uVar14 != 2))
         && (pLVar7 = (LDREndPntPair *)((ulong)aLStack_90 | 1), pLVar9 = param_7 + 1,
            pLVar11 = param_7 + 5, pLVar12 = (LDREndPntPair *)((ulong)aLStack_90 | 5), uVar14 != 1))
      {
        pLVar7 = aLStack_90;
        pLVar9 = param_7;
        pLVar11 = param_7 + 4;
        pLVar12 = (LDREndPntPair *)((ulong)aLStack_90 | 4);
      }
      if (fVar16 <= fVar15) {
        if (fVar16 < param_5) {
          uVar13 = '\0';
          pLVar8 = pLVar12;
          pLVar10 = pLVar11;
          param_5 = fVar16;
          goto LAB_00a81e10;
        }
      }
      else if (fVar15 < param_5) {
        uVar13 = '\x01';
        pLVar8 = pLVar7;
        pLVar10 = pLVar9;
        param_5 = fVar15;
LAB_00a81e10:
        *pLVar10 = *pLVar8;
        fVar15 = (float)PerturbOne(this,param_1,param_2,param_3,param_4,uVar14,param_7,aLStack_a0,
                                   param_5,uVar13);
        if (fVar15 < param_5) {
          do {
            param_5 = fVar15;
            bVar5 = uVar13 != '\0';
            pLVar8 = pLVar7;
            if (bVar5) {
              pLVar8 = pLVar12;
            }
            uVar13 = '\x01' - uVar13;
            pLVar10 = pLVar9;
            if (bVar5) {
              pLVar10 = pLVar11;
            }
            *pLVar10 = *pLVar8;
            fVar15 = (float)PerturbOne(this,param_1,param_2,param_3,param_4,uVar14,param_7,
                                       aLStack_a0,param_5,uVar13);
          } while (fVar15 < param_5);
        }
      }
    }
    uVar14 = uVar14 + 1;
    if (uVar14 == 4) {
      local_84 = param_5;
      pDVar6 = (D3DX_BC7 *)Exhaustive(this,param_1,param_2,param_3,param_4,0,&local_84,param_7);
      pDVar6 = (D3DX_BC7 *)Exhaustive(pDVar6,param_1,param_2,param_3,param_4,1,&local_84,param_7);
      pDVar6 = (D3DX_BC7 *)Exhaustive(pDVar6,param_1,param_2,param_3,param_4,2,&local_84,param_7);
      Exhaustive(pDVar6,param_1,param_2,param_3,param_4,3,&local_84,param_7);
      if (*(long *)(lVar2 + 0x28) == local_80) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


