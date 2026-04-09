// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TruncatedFinal
// Entry Point: 00d06954
// Size: 772 bytes
// Signature: undefined __thiscall TruncatedFinal(IteratedHashBase<unsigned_long,CryptoPP::HashTransformation> * this, uchar * param_1, ulong param_2)


/* CryptoPP::IteratedHashBase<unsigned long, CryptoPP::HashTransformation>::TruncatedFinal(unsigned
   char*, unsigned long) */

void __thiscall
CryptoPP::IteratedHashBase<unsigned_long,CryptoPP::HashTransformation>::TruncatedFinal
          (IteratedHashBase<unsigned_long,CryptoPP::HashTransformation> *this,uchar *param_1,
          ulong param_2)

{
  undefined (*pauVar1) [16];
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  uchar *__src;
  void *__s;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  undefined (*pauVar15) [16];
  undefined8 *puVar16;
  uint uVar17;
  undefined auVar18 [16];
  undefined auVar19 [16];
  
  HashTransformation::ThrowIfInvalidTruncatedSize((HashTransformation *)this,param_2);
  lVar9 = (**(code **)(*(long *)this + 0xc0))(this);
  __src = (uchar *)(**(code **)(*(long *)this + 200))(this);
  uVar4 = (**(code **)(*(long *)this + 0x50))(this);
  uVar5 = (**(code **)(*(long *)this + 0xa8))(this);
  uVar17 = uVar4 - 0x10;
  iVar6 = (**(code **)(*(long *)this + 0x50))(this);
  uVar8 = 0;
  if (iVar6 != 0) {
    uVar8 = iVar6 - 1;
  }
  uVar8 = uVar8 & *(uint *)(this + 8);
  __s = (void *)(**(code **)(*(long *)this + 0xc0))(this);
  uVar2 = uVar8 + 1;
  *(undefined *)((long)__s + (ulong)uVar8) = 0x80;
  if (uVar8 < uVar17) {
    uVar17 = uVar17 - uVar2;
    __s = (void *)((long)__s + (ulong)uVar2);
  }
  else {
    memset((void *)((long)__s + (ulong)uVar2),0,(ulong)(iVar6 - uVar2));
    uVar7 = (**(code **)(*(long *)this + 0x50))(this);
    (**(code **)(*(long *)this + 0xb8))(this,__s,uVar7);
  }
  memset(__s,0,(ulong)uVar17);
  lVar3 = *(long *)this;
  uVar10 = *(long *)(this + 8) << 3;
  uVar12 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
  if (uVar5 != 0) {
    uVar10 = uVar12 >> 0x20 | uVar12 << 0x20;
  }
  *(ulong *)(lVar9 + ((ulong)(uVar4 >> 3) + (ulong)uVar5) * 8 + -0x10) = uVar10;
  uVar10 = *(long *)(this + 0x10) << 3;
  uVar12 = (uVar10 & 0xff00ff00ff00ff00) >> 8 |
           (*(ulong *)(this + 8) >> 0x3d | uVar10 & 0xff00ff00ff00ff) << 8;
  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
  uVar10 = *(ulong *)(this + 8) >> 0x3d | uVar10;
  if (uVar5 != 0) {
    uVar10 = uVar12 >> 0x20 | uVar12 << 0x20;
  }
  *(ulong *)(lVar9 + (~(ulong)uVar5 + (ulong)(uVar4 >> 3)) * 8) = uVar10;
  uVar7 = (**(code **)(lVar3 + 0x50))(this);
  (**(code **)(*(long *)this + 0xb8))(this,lVar9,uVar7);
  if ((((uint)param_1 | (uint)param_2) & 7) == 0) {
    if (uVar5 != 0) {
      if (7 < param_2) {
        uVar10 = param_2 >> 3;
        if ((param_2 < 0x20) ||
           ((param_1 < __src + (param_2 & 0xfffffffffffffff8) &&
            (__src < param_1 + (param_2 & 0xfffffffffffffff8))))) {
          uVar12 = 0;
        }
        else {
          uVar12 = uVar10 & 0x1ffffffffffffffc;
          pauVar15 = (undefined (*) [16])(__src + 0x10);
          puVar16 = (undefined8 *)(param_1 + 0x10);
          uVar11 = uVar12;
          do {
            pauVar1 = pauVar15 + -1;
            auVar18 = *pauVar15;
            pauVar15 = pauVar15 + 2;
            uVar11 = uVar11 - 4;
            auVar19 = NEON_rev64(*pauVar1,1);
            auVar18 = NEON_rev64(auVar18,1);
            puVar16[-1] = auVar19._8_8_;
            puVar16[-2] = auVar19._0_8_;
            puVar16[1] = auVar18._8_8_;
            *puVar16 = auVar18._0_8_;
            puVar16 = puVar16 + 4;
          } while (uVar11 != 0);
          if (uVar10 == uVar12) goto LAB_00d06bf0;
        }
        lVar9 = uVar10 - uVar12;
        puVar13 = (ulong *)(param_1 + uVar12 * 8);
        puVar14 = (ulong *)(__src + uVar12 * 8);
        do {
          lVar9 = lVar9 + -1;
          uVar10 = (*puVar14 & 0xff00ff00ff00ff00) >> 8 | (*puVar14 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          *puVar13 = uVar10 >> 0x20 | uVar10 << 0x20;
          puVar13 = puVar13 + 1;
          puVar14 = puVar14 + 1;
        } while (lVar9 != 0);
      }
      goto LAB_00d06bf0;
    }
    if (__src == param_1) goto LAB_00d06bf0;
  }
  else {
    uVar8 = (**(code **)(*(long *)this + 0x48))(this);
    if ((uVar5 != 0) && (7 < uVar8)) {
      uVar10 = (ulong)(uVar8 >> 3);
      if (uVar8 < 0x20) {
        uVar11 = 0;
      }
      else {
        uVar11 = uVar10 & 0x1ffffffc;
        pauVar15 = (undefined (*) [16])(__src + 0x10);
        uVar12 = uVar11;
        do {
          uVar12 = uVar12 - 4;
          auVar18 = NEON_rev64(pauVar15[-1],1);
          auVar19 = NEON_rev64(*pauVar15,1);
          *(long *)(pauVar15[-1] + 8) = auVar18._8_8_;
          *(long *)pauVar15[-1] = auVar18._0_8_;
          *(long *)(*pauVar15 + 8) = auVar19._8_8_;
          *(long *)*pauVar15 = auVar19._0_8_;
          pauVar15 = pauVar15 + 2;
        } while (uVar12 != 0);
        if (uVar11 == uVar10) goto LAB_00d06be4;
      }
      lVar9 = uVar10 - uVar11;
      puVar13 = (ulong *)(__src + uVar11 * 8);
      do {
        lVar9 = lVar9 + -1;
        uVar10 = (*puVar13 & 0xff00ff00ff00ff00) >> 8 | (*puVar13 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        *puVar13 = uVar10 >> 0x20 | uVar10 << 0x20;
        puVar13 = puVar13 + 1;
      } while (lVar9 != 0);
    }
  }
LAB_00d06be4:
  memcpy(param_1,__src,param_2);
LAB_00d06bf0:
                    /* WARNING: Could not recover jumptable at 0x00d06c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x40))(this);
  return;
}


