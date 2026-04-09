// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addPreplacedNodes
// Entry Point: 009e559c
// Size: 1100 bytes
// Signature: undefined __thiscall addPreplacedNodes(ProceduralPlacementRule * this, uint param_1, int * param_2, bool param_3)


/* ProceduralPlacementRule::addPreplacedNodes(unsigned int, int*, bool) */

void __thiscall
ProceduralPlacementRule::addPreplacedNodes
          (ProceduralPlacementRule *this,uint param_1,int *param_2,bool param_3)

{
  long **pplVar1;
  ulong uVar2;
  char *__s;
  size_t sVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  ProceduralPlacementManager *pPVar8;
  long lVar9;
  size_t sVar10;
  undefined4 *puVar11;
  long *__src;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long **pplVar15;
  long **pplVar16;
  long *plVar17;
  long lVar18;
  ulong __n;
  long **pplVar19;
  long **pplVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  float local_c0;
  float local_bc;
  LoadNodesHelper aLStack_b8 [8];
  void *local_b0;
  void *local_a8;
  long **local_98;
  long *local_90 [2];
  long local_80;
  
  lVar5 = tpidr_el0;
  local_80 = *(long *)(lVar5 + 0x28);
  ProceduralPlacementManager::LoadNodesHelper::LoadNodesHelper(aLStack_b8,param_1,param_2,param_3);
  if (local_98 != local_90) {
    pplVar1 = (long **)(this + 0xb0);
    lVar9 = *(long *)(this + 0x68);
    lVar18 = *(long *)(this + 0x70);
    pplVar19 = local_98;
    do {
      bVar6 = lVar18 != lVar9;
      lVar18 = lVar9;
      if (bVar6) {
        uVar21 = 0;
        plVar17 = pplVar19[4];
        do {
          lVar18 = *(long *)(lVar9 + uVar21 * 8);
                    /* try { // try from 009e565c to 009e5667 has its CatchHandler @ 009e5a24 */
          pPVar8 = (ProceduralPlacementManager *)ProceduralPlacementManager::getInstance();
          lVar9 = ProceduralPlacementManager::getReferenceObjectByName
                            (pPVar8,(basic_string *)(lVar18 + 0x48));
          if (lVar9 != 0) {
            __s = "";
            if ((char *)pplVar19[4][0x20] != (char *)0x0) {
              __s = (char *)pplVar19[4][0x20];
            }
            sVar10 = strlen(__s);
            bVar4 = *(byte *)(lVar9 + 0x18);
            sVar3 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar3 = *(size_t *)(lVar9 + 0x20);
            }
                    /* try { // try from 009e56b0 to 009e56c3 has its CatchHandler @ 009e5a04 */
            if ((sVar10 == sVar3) &&
               (iVar7 = std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::compare((ulong)(byte *)(lVar9 + 0x18),0,(char *)0xffffffffffffffff,
                                  (ulong)__s), iVar7 == 0)) goto LAB_009e56c8;
            goto LAB_009e5644;
          }
LAB_009e56c8:
          if ((*(byte *)((long)plVar17 + 0x41) >> 3 & 1) != 0) {
                    /* try { // try from 009e56d0 to 009e56d7 has its CatchHandler @ 009e5a00 */
            TransformGroup::updateEulerFromMatrix();
          }
          fVar22 = *(float *)(plVar17 + 0x26);
          fVar23 = *(float *)(plVar17 + 0x27);
                    /* try { // try from 009e56e0 to 009e56f7 has its CatchHandler @ 009e5a20 */
          pPVar8 = (ProceduralPlacementManager *)ProceduralPlacementManager::getInstance();
          ProceduralPlacementManager::toWorldSpace(pPVar8,fVar22,fVar23,&local_bc,&local_c0);
                    /* try { // try from 009e56f8 to 009e56ff has its CatchHandler @ 009e5a1c */
          puVar11 = (undefined4 *)operator_new(0x18);
          *(long *)(puVar11 + 4) = lVar18;
          pplVar20 = (long **)*pplVar1;
          *puVar11 = 0;
          puVar11[1] = (int)local_bc;
          puVar11[2] = (int)local_c0;
          if (pplVar20 == (long **)0x0) {
LAB_009e5768:
                    /* try { // try from 009e5768 to 009e576f has its CatchHandler @ 009e5a08 */
            __src = (long *)operator_new(8);
            *__src = (long)puVar11;
            iVar7 = *(int *)(lVar18 + 0x28);
                    /* try { // try from 009e5798 to 009e579f has its CatchHandler @ 009e5a0c */
            plVar12 = (long *)operator_new(8);
            *plVar12 = *__src;
            pplVar16 = pplVar1;
            pplVar15 = pplVar1;
            while (pplVar20 != (long **)0x0) {
              while (pplVar15 = pplVar20, iVar7 < *(int *)(pplVar15 + 4)) {
                pplVar16 = pplVar15;
                pplVar20 = (long **)*pplVar15;
                if ((long **)*pplVar15 == (long **)0x0) {
                  plVar14 = *pplVar15;
                  goto joined_r0x009e5808;
                }
              }
              if (iVar7 <= *(int *)(pplVar15 + 4)) break;
              pplVar16 = pplVar15 + 1;
              pplVar20 = (long **)*pplVar16;
            }
            plVar14 = *pplVar16;
joined_r0x009e5808:
            if (plVar14 == (long *)0x0) {
                    /* try { // try from 009e5834 to 009e583f has its CatchHandler @ 009e59f0 */
              puVar13 = (undefined8 *)operator_new(0x40);
              *(int *)(puVar13 + 4) = iVar7;
              puVar13[5] = plVar12;
              puVar13[6] = plVar12 + 1;
              puVar13[7] = plVar12 + 1;
              *puVar13 = 0;
              puVar13[1] = 0;
              puVar13[2] = pplVar15;
              *pplVar16 = puVar13;
              if (**(long **)(this + 0xa8) != 0) {
                *(long *)(this + 0xa8) = **(long **)(this + 0xa8);
                puVar13 = *pplVar16;
              }
              std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                        (*(__tree_node_base **)(this + 0xb0),(__tree_node_base *)puVar13);
              *(long *)(this + 0xb8) = *(long *)(this + 0xb8) + 1;
            }
            else if (plVar12 != (long *)0x0) {
              operator_delete(plVar12);
            }
            if (__src != (long *)0x0) {
LAB_009e5820:
              operator_delete(__src);
            }
          }
          else {
            iVar7 = *(int *)(lVar18 + 0x28);
            pplVar15 = pplVar20;
            pplVar16 = pplVar1;
            do {
              if (iVar7 <= *(int *)(pplVar15 + 4)) {
                pplVar16 = pplVar15;
              }
              pplVar15 = (long **)pplVar15[*(int *)(pplVar15 + 4) < iVar7];
            } while (pplVar15 != (long **)0x0);
            if ((pplVar16 == pplVar1) || (iVar7 < *(int *)(pplVar16 + 4))) goto LAB_009e5768;
            plVar12 = pplVar16[6];
            if (plVar12 == pplVar16[7]) {
              __src = pplVar16[5];
              __n = (long)plVar12 - (long)__src;
              uVar2 = ((long)__n >> 3) + 1;
              if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009e59d4 to 009e59e3 has its CatchHandler @ 009e59ec */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              if (uVar2 <= (ulong)((long)__n >> 2)) {
                uVar2 = (long)__n >> 2;
              }
              if (0x7ffffffffffffff7 < __n) {
                uVar2 = 0x1fffffffffffffff;
              }
              if (uVar2 == 0) {
                plVar12 = (long *)0x0;
              }
              else {
                if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                    /* try { // try from 009e58e4 to 009e58e7 has its CatchHandler @ 009e59e8 */
                plVar12 = (long *)operator_new(uVar2 << 3);
              }
              plVar12[(long)__n >> 3] = (long)puVar11;
              if (0 < (long)__n) {
                memcpy(plVar12,__src,__n);
              }
              pplVar16[5] = plVar12;
              pplVar16[6] = plVar12 + ((long)__n >> 3) + 1;
              pplVar16[7] = plVar12 + uVar2;
              if (__src == (long *)0x0) goto LAB_009e5644;
              goto LAB_009e5820;
            }
            *plVar12 = (long)puVar11;
            pplVar16[6] = plVar12 + 1;
          }
LAB_009e5644:
          lVar9 = *(long *)(this + 0x68);
          uVar21 = (ulong)((int)uVar21 + 1);
          lVar18 = *(long *)(this + 0x70);
        } while (uVar21 < (ulong)(*(long *)(this + 0x70) - lVar9 >> 3));
      }
      pplVar20 = (long **)pplVar19[1];
      if ((long **)pplVar19[1] == (long **)0x0) {
        pplVar20 = pplVar19 + 2;
        pplVar16 = (long **)*pplVar20;
        if ((long **)*pplVar16 != pplVar19) {
          do {
            plVar17 = *pplVar20;
            pplVar20 = (long **)(plVar17 + 2);
            pplVar16 = (long **)*pplVar20;
          } while (*pplVar16 != plVar17);
        }
      }
      else {
        do {
          pplVar16 = pplVar20;
          pplVar20 = (long **)*pplVar16;
        } while ((long **)*pplVar16 != (long **)0x0);
      }
      pplVar19 = pplVar16;
    } while (pplVar16 != local_90);
  }
  std::__ndk1::
  __tree<TransformGroup*,std::__ndk1::less<TransformGroup*>,std::__ndk1::allocator<TransformGroup*>>
  ::destroy((__tree<TransformGroup*,std::__ndk1::less<TransformGroup*>,std::__ndk1::allocator<TransformGroup*>>
             *)&local_98,(__tree_node *)local_90[0]);
  if (local_b0 != (void *)0x0) {
    local_a8 = local_b0;
    operator_delete(local_b0);
  }
  if (*(long *)(lVar5 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


