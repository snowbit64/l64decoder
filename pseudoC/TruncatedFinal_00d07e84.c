// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TruncatedFinal
// Entry Point: 00d07e84
// Size: 776 bytes
// Signature: undefined __thiscall TruncatedFinal(IteratedHashBase<unsigned_int,CryptoPP::HashTransformation> * this, uchar * param_1, ulong param_2)


/* CryptoPP::IteratedHashBase<unsigned int, CryptoPP::HashTransformation>::TruncatedFinal(unsigned
   char*, unsigned long) */

void __thiscall
CryptoPP::IteratedHashBase<unsigned_int,CryptoPP::HashTransformation>::TruncatedFinal
          (IteratedHashBase<unsigned_int,CryptoPP::HashTransformation> *this,uchar *param_1,
          ulong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  uchar *__src;
  void *__s;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  uint *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  HashTransformation::ThrowIfInvalidTruncatedSize((HashTransformation *)this,param_2);
  lVar8 = (**(code **)(*(long *)this + 0xc0))(this);
  __src = (uchar *)(**(code **)(*(long *)this + 200))(this);
  uVar3 = (**(code **)(*(long *)this + 0x50))(this);
  uVar4 = (**(code **)(*(long *)this + 0xa8))(this);
  uVar17 = uVar3 - 8;
  iVar5 = (**(code **)(*(long *)this + 0x50))(this);
  uVar7 = 0;
  if (iVar5 != 0) {
    uVar7 = iVar5 - 1;
  }
  uVar7 = uVar7 & *(uint *)(this + 8);
  __s = (void *)(**(code **)(*(long *)this + 0xc0))(this);
  uVar2 = uVar7 + 1;
  *(undefined *)((long)__s + (ulong)uVar7) = 0x80;
  if (uVar7 < uVar17) {
    uVar17 = uVar17 - uVar2;
    __s = (void *)((long)__s + (ulong)uVar2);
  }
  else {
    memset((void *)((long)__s + (ulong)uVar2),0,(ulong)(iVar5 - uVar2));
    uVar6 = (**(code **)(*(long *)this + 0x50))(this);
    (**(code **)(*(long *)this + 0xb8))(this,__s,uVar6);
  }
  memset(__s,0,(ulong)uVar17);
  uVar7 = *(int *)(this + 8) << 3;
  uVar17 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
  if (uVar4 != 0) {
    uVar7 = uVar17 >> 0x10 | uVar17 << 0x10;
  }
  lVar13 = *(long *)this;
  *(uint *)(lVar8 + ((ulong)(uVar3 >> 2) + (ulong)uVar4) * 4 + -8) = uVar7;
  uVar7 = (uint)(*(ulong *)(this + 8) >> 0x1d);
  uVar17 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
  if (uVar4 != 0) {
    uVar7 = uVar17 >> 0x10 | uVar17 << 0x10;
  }
  *(uint *)(lVar8 + (~(ulong)uVar4 + (ulong)(uVar3 >> 2)) * 4) = uVar7;
  uVar6 = (**(code **)(lVar13 + 0x50))(this);
  (**(code **)(*(long *)this + 0xb8))(this,lVar8,uVar6);
  if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
    if (uVar4 != 0) {
      if (3 < param_2) {
        uVar9 = param_2 >> 2;
        if ((param_2 < 0x10) ||
           ((param_1 < __src + (param_2 & 0xfffffffffffffffc) &&
            (__src < param_1 + (param_2 & 0xfffffffffffffffc))))) {
          uVar11 = 0;
        }
        else {
          uVar11 = uVar9 & 0x3ffffffffffffffc;
          puVar15 = (undefined8 *)(__src + 8);
          puVar16 = (undefined8 *)(param_1 + 8);
          uVar10 = uVar11;
          do {
            puVar1 = puVar15 + -1;
            uVar19 = *puVar15;
            puVar15 = puVar15 + 2;
            uVar10 = uVar10 - 4;
            uVar18 = NEON_rev32(*puVar1,1);
            uVar19 = NEON_rev32(uVar19,1);
            puVar16[-1] = uVar18;
            *puVar16 = uVar19;
            puVar16 = puVar16 + 2;
          } while (uVar10 != 0);
          if (uVar9 == uVar11) goto LAB_00d08124;
        }
        lVar8 = uVar9 - uVar11;
        puVar12 = (uint *)(param_1 + uVar11 * 4);
        puVar14 = (uint *)(__src + uVar11 * 4);
        do {
          lVar8 = lVar8 + -1;
          uVar7 = (*puVar14 & 0xff00ff00) >> 8 | (*puVar14 & 0xff00ff) << 8;
          *puVar12 = uVar7 >> 0x10 | uVar7 << 0x10;
          puVar12 = puVar12 + 1;
          puVar14 = puVar14 + 1;
        } while (lVar8 != 0);
      }
      goto LAB_00d08124;
    }
    if (__src == param_1) goto LAB_00d08124;
  }
  else {
    uVar7 = (**(code **)(*(long *)this + 0x48))(this);
    if ((uVar4 != 0) && (3 < uVar7)) {
      uVar9 = (ulong)(uVar7 >> 2);
      if (uVar7 < 0x10) {
        uVar10 = 0;
      }
      else {
        uVar10 = uVar9 & 0x3ffffffc;
        puVar15 = (undefined8 *)(__src + 8);
        uVar11 = uVar10;
        do {
          uVar11 = uVar11 - 4;
          uVar18 = NEON_rev32(puVar15[-1],1);
          uVar19 = NEON_rev32(*puVar15,1);
          puVar15[-1] = uVar18;
          *puVar15 = uVar19;
          puVar15 = puVar15 + 2;
        } while (uVar11 != 0);
        if (uVar10 == uVar9) goto LAB_00d08118;
      }
      lVar8 = uVar9 - uVar10;
      puVar12 = (uint *)(__src + uVar10 * 4);
      do {
        lVar8 = lVar8 + -1;
        uVar7 = (*puVar12 & 0xff00ff00) >> 8 | (*puVar12 & 0xff00ff) << 8;
        *puVar12 = uVar7 >> 0x10 | uVar7 << 0x10;
        puVar12 = puVar12 + 1;
      } while (lVar8 != 0);
    }
  }
LAB_00d08118:
  memcpy(param_1,__src,param_2);
LAB_00d08124:
                    /* WARNING: Could not recover jumptable at 0x00d0814c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x40))(this);
  return;
}


