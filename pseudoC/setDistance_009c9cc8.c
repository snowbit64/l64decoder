// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDistance
// Entry Point: 009c9cc8
// Size: 548 bytes
// Signature: undefined __thiscall setDistance(DistanceMatrixType * this, basic_string * param_1, int param_2)


/* ProceduralPlacementDistanceMatrix::DistanceMatrixType::setDistance(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int) */

void __thiscall
ProceduralPlacementDistanceMatrix::DistanceMatrixType::setDistance
          (DistanceMatrixType *this,basic_string *param_1,int param_2)

{
  DistanceMatrixType **ppDVar1;
  DistanceMatrixType *__n;
  char *__s2;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  void *pvVar6;
  int iVar7;
  __tree_node_base **pp_Var8;
  undefined8 *puVar9;
  DistanceMatrixType *pDVar10;
  DistanceMatrixType **ppDVar11;
  char *pcVar12;
  DistanceMatrixType **ppDVar13;
  char *pcVar14;
  DistanceMatrixType *pDVar15;
  long **this_00;
  DistanceMatrixType **ppDVar16;
  __tree_end_node *local_90;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  int local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  __n = *(DistanceMatrixType **)(param_1 + 2);
  __s2 = *(char **)(param_1 + 4);
  this_00 = (long **)(this + 0x18);
  ppDVar16 = (DistanceMatrixType **)*this_00;
  ppDVar1 = (DistanceMatrixType **)(this + 0x20);
  if ((*(byte *)param_1 & 1) == 0) {
    __s2 = (char *)((long)param_1 + 1);
    __n = (DistanceMatrixType *)(ulong)(*(byte *)param_1 >> 1);
  }
  if (ppDVar16 == ppDVar1) {
joined_r0x009c9e08:
    if (ppDVar16 != ppDVar1) goto LAB_009c9e48;
  }
  else {
    do {
      bVar2 = *(byte *)(ppDVar16 + 4);
      pDVar10 = (DistanceMatrixType *)(ulong)(bVar2 >> 1);
      pDVar15 = pDVar10;
      if ((bVar2 & 1) != 0) {
        pDVar15 = ppDVar16[5];
      }
      if (pDVar15 == __n) {
        pDVar15 = ppDVar16[6];
        if ((bVar2 & 1) == 0) {
          pDVar15 = (DistanceMatrixType *)((long)ppDVar16 + 0x21);
        }
        if ((bVar2 & 1) == 0) {
          if (__n == (DistanceMatrixType *)0x0) {
LAB_009c9e00:
            *(int *)(ppDVar16 + 7) = param_2;
            goto joined_r0x009c9e08;
          }
          pcVar12 = (char *)((long)ppDVar16 + 0x21);
          pcVar14 = __s2;
          while (*pcVar12 == *pcVar14) {
            pDVar10 = pDVar10 + -1;
            pcVar12 = pcVar12 + 1;
            pcVar14 = pcVar14 + 1;
            if (pDVar10 == (DistanceMatrixType *)0x0) goto LAB_009c9e00;
          }
        }
        else if ((__n == (DistanceMatrixType *)0x0) ||
                (iVar7 = memcmp(pDVar15,__s2,(size_t)__n), iVar7 == 0)) goto LAB_009c9e00;
      }
      ppDVar11 = (DistanceMatrixType **)ppDVar16[1];
      if ((DistanceMatrixType **)ppDVar16[1] == (DistanceMatrixType **)0x0) {
        ppDVar11 = ppDVar16 + 2;
        ppDVar13 = (DistanceMatrixType **)*ppDVar11;
        if ((DistanceMatrixType **)*ppDVar13 != ppDVar16) {
          do {
            pDVar15 = *ppDVar11;
            ppDVar11 = (DistanceMatrixType **)(pDVar15 + 0x10);
            ppDVar13 = (DistanceMatrixType **)*ppDVar11;
          } while (*ppDVar13 != pDVar15);
        }
      }
      else {
        do {
          ppDVar13 = ppDVar11;
          ppDVar11 = (DistanceMatrixType **)*ppDVar13;
        } while ((DistanceMatrixType **)*ppDVar13 != (DistanceMatrixType **)0x0);
      }
      ppDVar16 = ppDVar13;
    } while (ppDVar13 != ppDVar1);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)&local_88);
                    /* try { // try from 009c9e1c to 009c9e83 has its CatchHandler @ 009c9eec */
  local_70 = param_2;
  pp_Var8 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
                        *)this_00,&local_90,(basic_string *)&local_88);
  if (*pp_Var8 == (__tree_node_base *)0x0) {
    puVar9 = (undefined8 *)operator_new(0x40);
    pvVar6 = local_78;
    uVar5 = uStack_80;
    uVar4 = local_88;
    *puVar9 = 0;
    puVar9[1] = 0;
    uStack_80 = 0;
    local_78 = (void *)0x0;
    local_88 = 0;
    puVar9[6] = pvVar6;
    puVar9[5] = uVar5;
    puVar9[4] = uVar4;
    *(int *)(puVar9 + 7) = local_70;
    puVar9[2] = local_90;
    *pp_Var8 = (__tree_node_base *)puVar9;
    if ((long *)**this_00 != (long *)0x0) {
      *this_00 = (long *)**this_00;
      puVar9 = (undefined8 *)*pp_Var8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x20),(__tree_node_base *)puVar9);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
LAB_009c9e48:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


