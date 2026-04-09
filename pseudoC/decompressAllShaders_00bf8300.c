// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decompressAllShaders
// Entry Point: 00bf8300
// Size: 444 bytes
// Signature: undefined __thiscall decompressAllShaders(CompiledShaderArchive * this, uint param_1)


/* CompiledShaderArchive::decompressAllShaders(unsigned int) */

void __thiscall
CompiledShaderArchive::decompressAllShaders(CompiledShaderArchive *this,uint param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  void **ppvVar4;
  Logger *this_00;
  long lVar5;
  long lVar6;
  void **ppvVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  void *pvVar15;
  long lVar16;
  void *pvVar17;
  undefined **local_88 [2];
  CompiledShaderArchive *local_78;
  Config local_70 [8];
  char *local_68;
  uint local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar9 = *(long *)this;
  lVar6 = *(long *)(this + 8);
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00bf8478 to 00bf847f has its CatchHandler @ 00bf84cc */
    this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00bf8484 to 00bf8487 has its CatchHandler @ 00bf84bc */
    Logger::Logger(this_00);
    LogManager::getInstance()::singletonLogManager = this_00;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  uVar11 = lVar6 - lVar9;
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "DECOMPRESSING ALL SHADERS\n");
  local_88[0] = &PTR_createPerThreadData_00fecf20;
  uVar8 = (uint)(uVar11 >> 5);
  local_78 = this;
  if (uVar8 == 0) goto LAB_00bf843c;
  uVar10 = uVar11 >> 5 & 0xffffffff;
  lVar9 = *(long *)this;
  local_68 = "Shader decompression";
  local_70[0] = (Config)0x1;
  local_60 = param_1;
  ppvVar4 = (void **)operator_new__(uVar10 << 3);
  if (uVar10 < 4) {
    lVar5 = 0;
LAB_00bf8404:
    lVar6 = lVar5 - uVar10;
    pvVar15 = (void *)(lVar9 + lVar5 * 0x20);
    ppvVar7 = ppvVar4 + lVar5;
    do {
      *ppvVar7 = pvVar15;
      bVar2 = lVar6 != -1;
      lVar6 = lVar6 + 1;
      pvVar15 = (void *)((long)pvVar15 + 0x20);
      ppvVar7 = ppvVar7 + 1;
    } while (bVar2);
  }
  else {
    uVar11 = uVar11 >> 5 & 3;
    lVar5 = uVar10 - uVar11;
    lVar13 = 1;
    lVar12 = 0;
    ppvVar7 = ppvVar4 + 2;
    lVar6 = lVar5;
    do {
      lVar14 = lVar12 * 0x20;
      lVar16 = lVar13 * 0x20;
      lVar6 = lVar6 + -4;
      lVar12 = lVar12 + 4;
      lVar13 = lVar13 + 4;
      pvVar15 = (void *)(lVar9 + lVar14);
      pvVar17 = (void *)(lVar9 + lVar16);
      ppvVar7[-1] = pvVar17;
      ppvVar7[-2] = pvVar15;
      ppvVar7[1] = (void *)((long)pvVar17 + 0x40);
      *ppvVar7 = (void *)((long)pvVar15 + 0x40);
      ppvVar7 = ppvVar7 + 4;
    } while (lVar6 != 0);
    if (uVar11 != 0) goto LAB_00bf8404;
  }
  MapFold::execute((MapFold *)local_88,ppvVar4,uVar8,local_70);
  operator_delete__(ppvVar4);
LAB_00bf843c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


