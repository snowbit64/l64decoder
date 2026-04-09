// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIndexedTriangleSetSerializedSize
// Entry Point: 0091fd5c
// Size: 684 bytes
// Signature: undefined __cdecl getIndexedTriangleSetSerializedSize(char * param_1, IndexedTriangleSet * param_2, set * param_3, CookingInterface * param_4, vector * param_5)


/* SerializationHelper::getIndexedTriangleSetSerializedSize(char const*, IndexedTriangleSet*,
   std::__ndk1::set<Bt2PhysicsCookedDataSet::CookingId,
   std::__ndk1::less<Bt2PhysicsCookedDataSet::CookingId>,
   std::__ndk1::allocator<Bt2PhysicsCookedDataSet::CookingId> > const*,
   SerializationHelper::CookingInterface*, std::__ndk1::vector<SerializationHelper::CookedMeshItem,
   std::__ndk1::allocator<SerializationHelper::CookedMeshItem> >&) */

int SerializationHelper::getIndexedTriangleSetSerializedSize
              (char *param_1,IndexedTriangleSet *param_2,set *param_3,CookingInterface *param_4,
              vector *param_5)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  ulong uVar7;
  void *__dest;
  set **ppsVar8;
  set **ppsVar9;
  set *psVar10;
  undefined4 uVar11;
  void *__src;
  ulong __n;
  set **ppsVar12;
  undefined8 uVar13;
  undefined8 local_a8;
  int local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  sVar6 = strlen(param_1);
  iVar5 = getSerializedIndexedTriangleSetSize(param_2);
  iVar5 = iVar5 + ((int)sVar6 + 0x1bU & 0xfffffffc) + 4;
  if ((param_3 != (set *)0x0) && (param_4 != (CookingInterface *)0x0)) {
    if (*(set ***)param_3 != (set **)(param_3 + 8)) {
      uVar13 = NEON_fmov(0x3f800000,4);
      ppsVar12 = *(set ***)param_3;
      do {
        local_80 = 0x3f800000;
        local_9c = 0;
        local_a8 = 0;
        local_88 = uVar13;
        if (*(set *)((long)ppsVar12 + 0x19) == (set)0x0) {
          uVar7 = (***(code ***)param_4)(param_4,param_2,0,&local_88,&local_a8,&local_9c);
          if ((uVar7 & 1) != 0) {
            uVar11 = 1;
            goto LAB_0091fe5c;
          }
        }
        else {
          uVar7 = (*(*(code ***)param_4)[1])(param_4,param_2,0,&local_88,&local_a8,&local_9c);
          if ((uVar7 & 1) != 0) {
            uVar11 = 2;
LAB_0091fe5c:
            iVar4 = local_9c;
            uVar3 = local_a8;
            puVar1 = *(undefined4 **)(param_5 + 8);
            local_98 = local_88;
            local_90 = local_80;
            if (puVar1 == *(undefined4 **)(param_5 + 0x10)) {
              __src = *(void **)param_5;
              __n = (long)puVar1 - (long)__src;
              uVar7 = ((long)__n >> 5) + 1;
              if (uVar7 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              if (uVar7 <= (ulong)((long)__n >> 4)) {
                uVar7 = (long)__n >> 4;
              }
              if (0x7fffffffffffffdf < __n) {
                uVar7 = 0x7ffffffffffffff;
              }
              if (uVar7 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
              __dest = operator_new(uVar7 * 0x20);
              puVar1 = (undefined4 *)((long)__dest + ((long)__n >> 5) * 0x20);
              *puVar1 = uVar11;
              *(undefined8 *)(puVar1 + 1) = local_88;
              puVar1[3] = local_80;
              *(undefined8 *)(puVar1 + 4) = uVar3;
              puVar1[6] = iVar4;
              if (0 < (long)__n) {
                memcpy(__dest,__src,__n);
              }
              *(void **)param_5 = __dest;
              *(undefined4 **)(param_5 + 8) = puVar1 + 8;
              *(void **)(param_5 + 0x10) = (void *)((long)__dest + uVar7 * 0x20);
              if (__src != (void *)0x0) {
                operator_delete(__src);
              }
            }
            else {
              *puVar1 = uVar11;
              *(undefined8 *)(puVar1 + 4) = local_a8;
              *(undefined8 *)(puVar1 + 1) = local_88;
              puVar1[3] = local_80;
              puVar1[6] = local_9c;
              *(undefined4 **)(param_5 + 8) = puVar1 + 8;
            }
            iVar5 = iVar5 + local_9c + 8;
          }
        }
        ppsVar8 = (set **)ppsVar12[1];
        if ((set **)ppsVar12[1] == (set **)0x0) {
          ppsVar8 = ppsVar12 + 2;
          ppsVar9 = (set **)*ppsVar8;
          if ((set **)*ppsVar9 != ppsVar12) {
            do {
              psVar10 = *ppsVar8;
              ppsVar8 = (set **)(psVar10 + 0x10);
              ppsVar9 = (set **)*ppsVar8;
            } while (*ppsVar9 != psVar10);
          }
        }
        else {
          do {
            ppsVar9 = ppsVar8;
            ppsVar8 = (set **)*ppsVar9;
          } while ((set **)*ppsVar9 != (set **)0x0);
        }
        ppsVar12 = ppsVar9;
      } while (ppsVar9 != (set **)(param_3 + 8));
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}


