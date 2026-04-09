// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: globalShutdown
// Entry Point: 00c1eedc
// Size: 248 bytes
// Signature: undefined __cdecl globalShutdown(Context * param_1)


/* HlslParser::globalShutdown(HlslParser::Context&) */

undefined8 HlslParser::globalShutdown(Context *param_1)

{
  GsTSymbolTableLevel *pGVar1;
  void *pvVar2;
  ulong uVar3;
  void **ppvVar4;
  void *pvVar5;
  void **ppvVar6;
  SHC_PoolAllocator *this;
  
  if (*(long *)param_1 == 0) {
    return 1;
  }
  ppvVar6 = *(void ***)(param_1 + 8);
  pGVar1 = *(GsTSymbolTableLevel **)
            ((long)*ppvVar6 +
            (((long)ppvVar6[1] - (long)*ppvVar6) * 0x20000000 + -0x100000000 >> 0x20) * 8);
  if (pGVar1 == (GsTSymbolTableLevel *)0x0) {
    ppvVar6[1] = (void *)((long)ppvVar6[1] + -8);
  }
  else {
    GsTSymbolTableLevel::~GsTSymbolTableLevel(pGVar1);
    ppvVar4 = *(void ***)(param_1 + 8);
    ppvVar6[1] = (void *)((long)ppvVar6[1] + -8);
    ppvVar6 = ppvVar4;
    if (ppvVar4 == (void **)0x0) goto LAB_00c1efa4;
  }
  pvVar2 = *ppvVar6;
  pvVar5 = ppvVar6[1];
  uVar3 = (long)pvVar5 - (long)pvVar2;
  while (8 < uVar3) {
    pGVar1 = *(GsTSymbolTableLevel **)
              ((long)pvVar2 +
              (((long)pvVar5 - (long)pvVar2) * 0x20000000 + -0x100000000 >> 0x20) * 8);
    if (pGVar1 != (GsTSymbolTableLevel *)0x0) {
      GsTSymbolTableLevel::~GsTSymbolTableLevel(pGVar1);
      pvVar2 = *ppvVar6;
      pvVar5 = ppvVar6[1];
    }
    pvVar5 = (void *)((long)pvVar5 + -8);
    ppvVar6[1] = pvVar5;
    uVar3 = (long)pvVar5 - (long)pvVar2;
  }
  if (pvVar2 != (void *)0x0) {
    ppvVar6[1] = pvVar2;
    operator_delete(pvVar2);
  }
  operator_delete(ppvVar6);
LAB_00c1efa4:
  this = *(SHC_PoolAllocator **)param_1;
  if (this != (SHC_PoolAllocator *)0x0) {
    SHC_PoolAllocator::~SHC_PoolAllocator(this);
    operator_delete(this);
  }
  *(undefined8 *)param_1 = 0;
  return 1;
}


