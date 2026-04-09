// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StructFieldRemapping
// Entry Point: 00c55c88
// Size: 680 bytes
// Signature: undefined __thiscall StructFieldRemapping(StructFieldRemapping * this, IR_Struct * param_1)


/* StructFieldRemapping::StructFieldRemapping(IR_Struct*) */

void __thiscall
StructFieldRemapping::StructFieldRemapping(StructFieldRemapping *this,IR_Struct *param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  char *__s1;
  undefined4 *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  ulong __n;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  ulong uVar15;
  uint uVar16;
  undefined4 *local_a8;
  undefined4 *local_a0;
  undefined4 *local_98;
  undefined8 local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  uint local_6c;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  lVar12 = *(long *)(param_1 + 0x30);
  local_a8 = (undefined4 *)0x0;
  local_a0 = (undefined4 *)0x0;
  local_98 = (undefined4 *)0x0;
  iVar4 = (int)((ulong)(*(long *)(param_1 + 0x38) - lVar12) >> 3) * -0x49249249;
  puVar11 = local_a8;
  if (iVar4 != 0) {
    lVar13 = 0;
    puVar10 = (undefined4 *)0x0;
    uVar15 = 0;
    uVar16 = 0;
    do {
      __s1 = *(char **)(lVar12 + lVar13 + 8);
      if ((__s1 != (char *)0x0) &&
         (iVar6 = strcmp(__s1,"TEXCOORDn"), puVar11 = local_a8, iVar6 == 0)) {
        puVar8 = *(uint **)(lVar12 + lVar13 + 0x10);
        uVar9 = *puVar8;
        uVar14 = (undefined4)uVar15;
        if (uVar9 < 2) {
          if (uVar9 == 0) {
            uVar9 = 1;
          }
          else if (uVar9 == 1) {
            uVar9 = puVar8[5];
          }
          else {
            uVar9 = 0;
          }
          uVar2 = puVar8[2];
          uVar3 = *(undefined4 *)(lVar12 + lVar13 + 0x18);
          if (puVar10 == local_98) {
            __n = (long)puVar10 - (long)local_a8;
            uVar1 = ((long)__n >> 4) + 1;
            if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar1 <= (ulong)((long)__n >> 3)) {
              uVar1 = (long)__n >> 3;
            }
            if (0x7fffffffffffffef < __n) {
              uVar1 = 0xfffffffffffffff;
            }
            if (uVar1 >> 0x3c != 0) {
                    /* try { // try from 00c55f18 to 00c55f2b has its CatchHandler @ 00c55f38 */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 00c55e40 to 00c55e43 has its CatchHandler @ 00c55f34 */
            puVar7 = (undefined4 *)operator_new(uVar1 << 4);
            puVar10 = puVar7 + ((long)__n >> 4) * 4;
            *puVar10 = uVar14;
            puVar10[1] = uVar9;
            puVar10[2] = uVar2;
            puVar10[3] = uVar3;
            if (0 < (long)__n) {
              memcpy(puVar7,puVar11,__n);
            }
            puVar10 = puVar10 + 4;
            local_98 = puVar7 + uVar1 * 4;
            local_a8 = puVar7;
            local_a0 = puVar10;
            if (puVar11 != (undefined4 *)0x0) {
              operator_delete(puVar11);
            }
          }
          else {
            *puVar10 = uVar14;
            puVar10[1] = uVar9;
            puVar10[2] = uVar2;
            puVar10[3] = uVar3;
            puVar10 = puVar10 + 4;
            local_a0 = puVar10;
          }
        }
        else {
          local_70 = 0;
          local_90 = 0;
          uStack_78 = 0x300000002;
          local_80 = 0x100000000;
          local_6c = puVar8[2];
                    /* try { // try from 00c55db8 to 00c55dcb has its CatchHandler @ 00c55f3c */
          local_88 = uVar14;
          uStack_84 = uVar16;
          FUN_00c55f70(this,&local_90);
          iVar6 = IR_Type::getSimdRegisterCount();
          uVar16 = iVar6 + uVar16;
        }
      }
      puVar7 = local_a8;
      lVar12 = *(long *)(param_1 + 0x30);
      uVar15 = uVar15 + 1;
      lVar13 = lVar13 + 0x38;
    } while (uVar15 < (uint)((int)((ulong)(*(long *)(param_1 + 0x38) - lVar12) >> 3) * -0x49249249))
    ;
    puVar11 = puVar7;
    if ((iVar4 != 0) && (puVar11 = puVar10, puVar10 != local_a8)) {
                    /* try { // try from 00c55ec0 to 00c55ecf has its CatchHandler @ 00c55f30 */
      initializeVaryings(this,(vector *)&local_a8,uVar16);
      puVar11 = puVar7;
    }
  }
  if (puVar11 != (undefined4 *)0x0) {
    operator_delete(puVar11);
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


