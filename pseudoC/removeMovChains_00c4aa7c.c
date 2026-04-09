// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeMovChains
// Entry Point: 00c4aa7c
// Size: 712 bytes
// Signature: undefined removeMovChains(void)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Section::removeMovChains() */

void IR_Section::removeMovChains(void)

{
  void *__dest;
  uint uVar1;
  uint uVar2;
  size_t __n;
  long lVar3;
  undefined8 *******pppppppuVar4;
  bool bVar5;
  long *in_x0;
  long lVar6;
  long lVar7;
  undefined8 ******ppppppuVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *******pppppppuVar12;
  int *piVar13;
  undefined8 ******ppppppuVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 *******local_80;
  undefined8 *******local_78;
  long local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar6 = in_x0[4];
  local_78 = (undefined8 *******)0x0;
  local_70 = 0;
  local_80 = &local_78;
  if (in_x0[5] != lVar6) {
    uVar16 = 0;
    uVar15 = 0;
    do {
      piVar13 = *(int **)(lVar6 + uVar16 * 8);
      uVar10 = piVar13[1];
      uVar1 = uVar10 & 0xffff;
      if (uVar1 != 0) {
        uVar9 = 0;
        while( true ) {
          uVar10 = uVar9 + (uVar10 >> 0x10) + 2;
          uVar2 = piVar13[uVar10];
          if ((-1 < (int)uVar2) &&
             (pppppppuVar11 = &local_78, pppppppuVar12 = local_78,
             local_78 != (undefined8 *******)0x0)) {
            do {
              bVar5 = *(uint *)((long)pppppppuVar12 + 0x1c) < uVar2;
              if (!bVar5) {
                pppppppuVar11 = pppppppuVar12;
              }
              pppppppuVar4 = pppppppuVar12 + bVar5;
              pppppppuVar12 = (undefined8 *******)*pppppppuVar4;
            } while ((undefined8 *******)*pppppppuVar4 != (undefined8 *******)0x0);
            if (((undefined8 ********)pppppppuVar11 != &local_78) &&
               (*(uint *)((long)pppppppuVar11 + 0x1c) <= uVar2)) {
              piVar13[uVar10] = *(int *)(pppppppuVar11 + 4);
            }
          }
          uVar9 = uVar9 + 1;
          if (uVar9 == uVar1) break;
          uVar10 = piVar13[1];
        }
      }
      if ((*piVar13 == 0x1a) &&
         (uVar1 = *(uint *)((long)piVar13 + ((ulong)((uint)piVar13[1] >> 0xe) & 0x3fffc) + 8),
         -1 < (int)uVar1)) {
        uVar10 = piVar13[2];
                    /* try { // try from 00c4abac to 00c4acd3 has its CatchHandler @ 00c4ad44 */
        lVar6 = IR_RegisterSet::getRegisterType((IR_RegisterSet *)(*in_x0 + 0x98),uVar1);
        lVar7 = IR_RegisterSet::getRegisterType((IR_RegisterSet *)(*in_x0 + 0x98),uVar10);
        pppppppuVar11 = &local_78;
        pppppppuVar12 = &local_78;
        pppppppuVar4 = local_78;
        if (lVar6 == lVar7) {
          while (pppppppuVar4 != (undefined8 *******)0x0) {
            while (pppppppuVar12 = pppppppuVar4, uVar10 < *(uint *)((long)pppppppuVar12 + 0x1c)) {
              pppppppuVar4 = (undefined8 *******)*pppppppuVar12;
              pppppppuVar11 = pppppppuVar12;
              if ((undefined8 *******)*pppppppuVar12 == (undefined8 *******)0x0) {
                ppppppuVar14 = *pppppppuVar12;
                goto joined_r0x00c4ac64;
              }
            }
            if (uVar10 <= *(uint *)((long)pppppppuVar12 + 0x1c)) break;
            pppppppuVar11 = pppppppuVar12 + 1;
            pppppppuVar4 = (undefined8 *******)pppppppuVar12[1];
          }
          ppppppuVar14 = *pppppppuVar11;
joined_r0x00c4ac64:
          if (ppppppuVar14 == (undefined8 ******)0x0) {
            ppppppuVar14 = (undefined8 ******)operator_new(0x28);
            *(uint *)((long)ppppppuVar14 + 0x1c) = uVar10;
            *(undefined4 *)(ppppppuVar14 + 4) = 0;
            *ppppppuVar14 = (undefined8 *****)0x0;
            ppppppuVar14[1] = (undefined8 *****)0x0;
            ppppppuVar14[2] = pppppppuVar12;
            *pppppppuVar11 = ppppppuVar14;
            ppppppuVar8 = ppppppuVar14;
            if ((undefined8 *******)*local_80 != (undefined8 *******)0x0) {
              ppppppuVar8 = *pppppppuVar11;
              local_80 = (undefined8 *******)*local_80;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      ((__tree_node_base *)local_78,(__tree_node_base *)ppppppuVar8);
            local_70 = local_70 + 1;
          }
          *(uint *)(ppppppuVar14 + 4) = uVar1;
          lVar6 = IR_RegisterSet::getRegisterName((IR_RegisterSet *)(*in_x0 + 0x98),uVar10);
          if ((lVar6 != 0) &&
             (lVar6 = IR_RegisterSet::getRegisterName((IR_RegisterSet *)(*in_x0 + 0x98),uVar1),
             lVar6 == 0)) {
            lVar6 = *in_x0;
            IR_RegisterSet::getRegisterName((IR_RegisterSet *)(lVar6 + 0x98),uVar10);
            IR_RegisterSet::setRegisterName
                      ((uint)(IR_RegisterSet *)(lVar6 + 0x98),(char *)(ulong)uVar1);
          }
          __dest = (void *)(in_x0[4] + uVar16 * 8);
          __n = in_x0[5] - (long)(void *)((long)__dest + 8);
          if (__n != 0) {
            memmove(__dest,(void *)((long)__dest + 8),__n);
          }
          in_x0[5] = (long)__dest + __n;
          operator_delete__(piVar13);
          uVar15 = uVar15 - 1;
        }
      }
      lVar6 = in_x0[4];
      uVar15 = uVar15 + 1;
      uVar16 = (ulong)uVar15;
    } while (uVar16 < (ulong)(in_x0[5] - lVar6 >> 3));
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
             *)&local_80,(__tree_node *)local_78);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


