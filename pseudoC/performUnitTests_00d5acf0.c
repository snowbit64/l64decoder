// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: performUnitTests
// Entry Point: 00d5acf0
// Size: 644 bytes
// Signature: undefined performUnitTests(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::performUnitTests() */

void HACD::performUnitTests(void)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *this;
  MyMicroAllocator *this_00;
  void *pvVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  void *apvStack_10070 [8194];
  
  lVar2 = tpidr_el0;
  lVar7 = *(long *)(lVar2 + 0x28);
  iVar11 = 40000000;
  memset(apvStack_10070,0,0x10000);
  this = (undefined8 *)malloc(0x18);
  *this = &PTR_micro_malloc_01012af8;
  this[1] = &PTR_heap_malloc_01012b38;
  this_00 = (MyMicroAllocator *)malloc(0xc02da0);
  MyMicroAllocator::MyMicroAllocator(this_00,(MicroHeap *)this,this_00,0xc02da0,0x200000);
  this[2] = this_00;
  srand(0);
  iVar12 = 40000000;
  do {
    while( true ) {
      uVar3 = rand();
      uVar3 = uVar3 & 0x1fff;
      if (apvStack_10070[uVar3] == (void *)0x0) break;
      MyHeapManager::inline_heap_free((MyHeapManager *)this,apvStack_10070[uVar3]);
      iVar12 = iVar12 + -1;
      apvStack_10070[uVar3] = (void *)0x0;
      if (iVar12 == 0) goto LAB_00d5ae00;
    }
    uVar4 = rand();
    uVar5 = rand();
    uVar1 = uVar4 & 0x3f | 0x100;
    if ((uVar5 & 0x7f) != 0) {
      uVar1 = uVar4 & 0x3f;
    }
    pvVar6 = (void *)heap_malloc((HeapManager *)(this + 1),(ulong)uVar1);
    iVar12 = iVar12 + -1;
    apvStack_10070[uVar3] = pvVar6;
  } while (iVar12 != 0);
LAB_00d5ae00:
  lVar8 = 0;
  do {
    if (*(void **)((long)apvStack_10070 + lVar8) != (void *)0x0) {
      MyHeapManager::inline_heap_free
                ((MyHeapManager *)this,*(void **)((long)apvStack_10070 + lVar8));
      *(undefined8 *)((long)apvStack_10070 + lVar8) = 0;
    }
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0x10000);
  printf("Micro allocation test took %d milliseconds.\r\n",0);
  srand(0);
  do {
    while( true ) {
      uVar3 = rand();
      uVar3 = uVar3 & 0x1fff;
      if (apvStack_10070[uVar3] == (void *)0x0) break;
      free(apvStack_10070[uVar3]);
      iVar11 = iVar11 + -1;
      apvStack_10070[uVar3] = (void *)0x0;
      if (iVar11 == 0) goto LAB_00d5aea4;
    }
    uVar4 = rand();
    uVar5 = rand();
    uVar1 = uVar4 & 0x3f | 0x100;
    if ((uVar5 & 0x7f) != 0) {
      uVar1 = uVar4 & 0x3f;
    }
    pvVar6 = malloc((ulong)uVar1);
    iVar11 = iVar11 + -1;
    apvStack_10070[uVar3] = pvVar6;
  } while (iVar11 != 0);
LAB_00d5aea4:
  lVar8 = 0;
  do {
    if (*(void **)((long)apvStack_10070 + lVar8) != (void *)0x0) {
      free(*(void **)((long)apvStack_10070 + lVar8));
      *(undefined8 *)((long)apvStack_10070 + lVar8) = 0;
    }
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0x10000);
  printf("Standard malloc/free test took %d milliseconds.\r\n",0);
  puVar9 = (undefined8 *)this[2];
  *this = &PTR_micro_malloc_01012af8;
  this[1] = &PTR_heap_malloc_01012b38;
  plVar10 = (long *)puVar9[2];
  *puVar9 = &PTR_malloc_01012a20;
  puVar9[1] = &PTR_addMicroChunk_01012a60;
  if (puVar9[0x10b] != 0) {
    (**(code **)(*plVar10 + 8))(plVar10);
  }
  (**(code **)(*plVar10 + 8))(plVar10,puVar9);
  free(this);
  if (*(long *)(lVar2 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


