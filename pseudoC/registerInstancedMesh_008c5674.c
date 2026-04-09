// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: registerInstancedMesh
// Entry Point: 008c5674
// Size: 888 bytes
// Signature: undefined __thiscall registerInstancedMesh(InstancedGeometryManager * this, uint param_1, uint param_2, void * param_3, uint param_4, ushort * param_5, bool param_6, ulonglong param_7)


/* InstancedGeometryManager::registerInstancedMesh(unsigned int, unsigned int, void const*, unsigned
   int, unsigned short const*, bool, unsigned long long) */

void ** __thiscall
InstancedGeometryManager::registerInstancedMesh
          (InstancedGeometryManager *this,uint param_1,uint param_2,void *param_3,uint param_4,
          ushort *param_5,bool param_6,ulonglong param_7)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  byte *pbVar8;
  long **pplVar9;
  ushort *puVar10;
  size_t __n;
  long **pplVar11;
  void *pvVar12;
  long **pplVar13;
  ulong __n_00;
  void **ppvVar14;
  
  CRC64::initTable();
  uVar7 = param_2 * param_1;
  __n_00 = (ulong)uVar7;
  uVar4 = *(ulong *)(CRC64::s_t +
                    ((ulong)((uint)(*(ulong *)(CRC64::s_t + (ulong)(~uVar7 & 0xff) * 8) ^
                                   0xffffffffffffff) ^ uVar7 >> 8) & 0xff) * 8) ^
          (*(ulong *)(CRC64::s_t + (ulong)(~uVar7 & 0xff) * 8) ^ 0xffffffffffffff) >> 8;
  uVar4 = *(ulong *)(CRC64::s_t + ((ulong)((uint)uVar4 ^ uVar7 >> 0x10) & 0xff) * 8) ^ uVar4 >> 8;
  uVar5 = *(ulong *)(CRC64::s_t + (uVar4 & 0xff ^ (ulong)(uVar7 >> 0x18)) * 8) ^ uVar4 >> 8;
  pbVar8 = (byte *)param_3;
  uVar4 = __n_00;
  if (uVar7 != 0) {
    do {
      uVar4 = uVar4 - 1;
      uVar5 = *(ulong *)(CRC64::s_t + (uVar5 & 0xff ^ (ulong)*pbVar8) * 8) ^ uVar5 >> 8;
      pbVar8 = pbVar8 + 1;
    } while (uVar4 != 0);
  }
  uVar4 = *(ulong *)(CRC64::s_t + ((ulong)((uint)uVar5 ^ param_4) & 0xff) * 8) ^ uVar5 >> 8;
  uVar4 = *(ulong *)(CRC64::s_t + ((ulong)((uint)uVar4 ^ param_4 >> 8) & 0xff) * 8) ^ uVar4 >> 8;
  uVar4 = *(ulong *)(CRC64::s_t + ((ulong)((uint)uVar4 ^ param_4 >> 0x10) & 0xff) * 8) ^ uVar4 >> 8;
  pvVar12 = (void *)(*(ulong *)(CRC64::s_t + (uVar4 & 0xff ^ (ulong)(param_4 >> 0x18)) * 8) ^
                    uVar4 >> 8);
  puVar10 = param_5;
  uVar7 = param_4;
  if (param_4 != 0) {
    do {
      uVar7 = uVar7 - 1;
      uVar4 = *(ulong *)(CRC64::s_t + ((ulong)((uint)pvVar12 ^ (uint)*puVar10) & 0xff) * 8) ^
              (ulong)pvVar12 >> 8;
      pvVar12 = (void *)(*(ulong *)(CRC64::s_t + (uVar4 & 0xff ^ (ulong)(*puVar10 >> 8)) * 8) ^
                        uVar4 >> 8);
      puVar10 = puVar10 + 1;
    } while (uVar7 != 0);
  }
  __n = (ulong)param_4 << 1;
  pplVar9 = (long **)(this + 8);
  pplVar13 = *(long ***)this;
  while (pplVar13 != pplVar9) {
    ppvVar14 = (void **)pplVar13[4];
    if (((((ppvVar14[5] == pvVar12) && (*(uint *)(ppvVar14 + 1) == param_1)) &&
         (*(uint *)((long)ppvVar14 + 0xc) == param_2)) &&
        ((iVar2 = memcmp(*ppvVar14,param_3,__n_00), iVar2 == 0 &&
         (*(uint *)(ppvVar14 + 4) == param_4)))) &&
       (iVar2 = memcmp(ppvVar14[3],param_5,__n), iVar2 == 0)) {
      return ppvVar14;
    }
    pplVar11 = (long **)pplVar13[1];
    if (pplVar13[1] == (long *)0x0) {
      pplVar11 = pplVar13 + 2;
      bVar1 = (long **)**pplVar11 != pplVar13;
      pplVar13 = (long **)*pplVar11;
      if (bVar1) {
        do {
          plVar6 = *pplVar11;
          pplVar11 = (long **)(plVar6 + 2);
          pplVar13 = (long **)*pplVar11;
        } while (*pplVar13 != plVar6);
      }
    }
    else {
      do {
        pplVar13 = pplVar11;
        pplVar11 = (long **)*pplVar13;
      } while (*pplVar13 != (long *)0x0);
    }
  }
  ppvVar14 = (void **)operator_new(0x50);
  *(bool *)(ppvVar14 + 2) = param_6;
  *ppvVar14 = (void *)0x0;
  ppvVar14[8] = (void *)0x0;
  ppvVar14[9] = (void *)0x0;
  ppvVar14[7] = (void *)0x0;
  *(uint *)(ppvVar14 + 1) = param_1;
  *(uint *)((long)ppvVar14 + 0xc) = param_2;
  pvVar3 = operator_new__(__n_00);
  *ppvVar14 = pvVar3;
  memcpy(pvVar3,param_3,__n_00);
  uVar7 = 1;
  if (((param_2 < 0x8001) && (param_6)) && (uVar7 = 0, param_2 != 0)) {
    uVar7 = 0x10000 / param_2;
  }
  *(uint *)((long)ppvVar14 + 0x24) = uVar7;
  pvVar3 = operator_new__(__n);
  ppvVar14[3] = pvVar3;
  memcpy(pvVar3,param_5,__n);
  iVar2 = *(int *)(this + 0x18);
  pplVar11 = *(long ***)(this + 8);
  *(uint *)(ppvVar14 + 4) = param_4;
  *(int *)(this + 0x18) = iVar2 + 1;
  ppvVar14[5] = pvVar12;
  ppvVar14[6] = (void *)param_7;
  pplVar13 = pplVar9;
  if (pplVar11 == (long **)0x0) {
LAB_008c5964:
    plVar6 = *pplVar9;
  }
  else {
    pplVar9 = (long **)(this + 8);
    do {
      while (pplVar13 = pplVar11, pplVar13[4] <= ppvVar14) {
        if (ppvVar14 <= pplVar13[4]) goto LAB_008c5964;
        pplVar9 = pplVar13 + 1;
        pplVar11 = (long **)*pplVar9;
        if ((long **)*pplVar9 == (long **)0x0) goto LAB_008c5964;
      }
      pplVar9 = pplVar13;
      pplVar11 = (long **)*pplVar13;
    } while ((long **)*pplVar13 != (long **)0x0);
    plVar6 = *pplVar13;
  }
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)operator_new(0x28);
    plVar6[2] = (long)pplVar13;
    plVar6[4] = (long)ppvVar14;
    *plVar6 = 0;
    plVar6[1] = 0;
    *pplVar9 = plVar6;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      plVar6 = *pplVar9;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar6);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  return ppvVar14;
}


