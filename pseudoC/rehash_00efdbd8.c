// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rehash
// Entry Point: 00efdbd8
// Size: 432 bytes
// Signature: undefined rehash(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::detail::DenseHashTable<Luau::BytecodeBuilder::ConstantKey,
   std::__ndk1::pair<Luau::BytecodeBuilder::ConstantKey, int>,
   std::__ndk1::pair<Luau::BytecodeBuilder::ConstantKey const, int>,
   Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::ConstantKey, int>,
   Luau::BytecodeBuilder::ConstantKeyHash, std::__ndk1::equal_to<Luau::BytecodeBuilder::ConstantKey>
   >::rehash() */

void Luau::detail::
     DenseHashTable<Luau::BytecodeBuilder::ConstantKey,std::__ndk1::pair<Luau::BytecodeBuilder::ConstantKey,int>,std::__ndk1::pair<Luau::BytecodeBuilder::ConstantKey_const,int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::ConstantKey,int>,Luau::BytecodeBuilder::ConstantKeyHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::ConstantKey>>
     ::rehash(void)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  void **in_x0;
  void *pvVar8;
  void *pvVar9;
  undefined8 *puVar10;
  long lVar11;
  void *pvVar12;
  undefined4 *puVar13;
  void *pvVar14;
  undefined8 *puVar15;
  void *pvVar16;
  ulong uVar17;
  void *pvVar18;
  undefined8 uVar19;
  void *pvVar20;
  
  iVar6 = *(int *)(in_x0 + 3);
  pvVar16 = in_x0[1];
  pvVar18 = in_x0[4];
  pvVar1 = (void *)0x10;
  if (pvVar16 != (void *)0x0) {
    pvVar1 = (void *)((long)pvVar16 << 1);
  }
  if (pvVar1 == (void *)0x0) {
    pvVar8 = (void *)0x0;
  }
  else {
    pvVar8 = operator_new((long)pvVar1 * 0x18);
    puVar13 = (undefined4 *)((long)pvVar8 + 0x10);
    pvVar16 = pvVar1;
    do {
      pvVar20 = in_x0[4];
      pvVar12 = in_x0[3];
      *puVar13 = 0;
      pvVar16 = (void *)((long)pvVar16 + -1);
      *(void **)(puVar13 + -2) = pvVar20;
      *(void **)(puVar13 + -4) = pvVar12;
      puVar13 = puVar13 + 6;
    } while (pvVar16 != (void *)0x0);
    pvVar16 = in_x0[1];
  }
  if (pvVar16 != (void *)0x0) {
    pvVar20 = *in_x0;
    pvVar3 = in_x0[1];
    pvVar12 = (void *)0x0;
    iVar4 = *(int *)(in_x0 + 3);
    pvVar14 = in_x0[4];
    do {
      puVar15 = (undefined8 *)((long)pvVar20 + (long)pvVar12 * 0x18);
      iVar5 = *(int *)puVar15;
      pvVar9 = (void *)puVar15[1];
      if (iVar5 != iVar4 || pvVar9 != pvVar14) {
        uVar2 = iVar5 * 0x5bd1e995 ^ (uint)((ulong)pvVar9 >> 0x20);
        uVar7 = ((uint)pvVar9 ^ uVar2 >> 0x12) * 0x5bd1e995;
        uVar2 = (uVar2 ^ uVar7 >> 0x16) * 0x5bd1e995;
        uVar17 = (long)pvVar1 - 1U &
                 (ulong)((uVar2 ^ (uVar7 ^ uVar2 >> 0x11) * 0x5bd1e995 >> 0x13) * 0x5bd1e995);
        puVar10 = (undefined8 *)((long)pvVar8 + uVar17 * 0x18);
        if (*(int *)puVar10 == iVar6 && (void *)puVar10[1] == pvVar18) {
LAB_00efdc78:
          uVar19 = *puVar15;
          puVar10[1] = puVar15[1];
          *puVar10 = uVar19;
        }
        else if (*(int *)puVar10 != iVar5 || (void *)puVar10[1] != pvVar9) {
          lVar11 = 1;
          do {
            uVar17 = uVar17 + lVar11 & (long)pvVar1 - 1U;
            puVar10 = (undefined8 *)((long)pvVar8 + uVar17 * 0x18);
            if (*(int *)puVar10 == iVar6 && (void *)puVar10[1] == pvVar18) goto LAB_00efdc78;
            lVar11 = lVar11 + 1;
          } while (*(int *)puVar10 != iVar5 || (void *)puVar10[1] != pvVar9);
        }
        uVar19 = *puVar15;
        puVar10[1] = puVar15[1];
        *puVar10 = uVar19;
        *(undefined4 *)((long)pvVar8 + uVar17 * 0x18 + 0x10) =
             *(undefined4 *)((long)pvVar20 + (long)pvVar12 * 0x18 + 0x10);
        pvVar16 = pvVar3;
      }
      pvVar12 = (void *)((long)pvVar12 + 1);
    } while (pvVar12 < pvVar16);
  }
  pvVar16 = *in_x0;
  *in_x0 = pvVar8;
  in_x0[1] = pvVar1;
  if (pvVar16 != (void *)0x0) {
    operator_delete(pvVar16);
    return;
  }
  return;
}


