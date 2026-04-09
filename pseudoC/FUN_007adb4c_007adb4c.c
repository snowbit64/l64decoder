// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007adb4c
// Entry Point: 007adb4c
// Size: 792 bytes
// Signature: undefined FUN_007adb4c(void)


void FUN_007adb4c(char **param_1)

{
  long lVar1;
  undefined8 *__src;
  void *pvVar2;
  int iVar3;
  size_t sVar4;
  EntityRegistryManager *this;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  char *__s;
  undefined8 uVar10;
  void *pvVar11;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  void *local_98;
  void *local_90;
  undefined8 local_88;
  undefined8 local_80;
  size_t local_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  __s = *param_1;
  sVar4 = strlen(__s);
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    pvVar11 = (void *)((ulong)&local_80 | 1);
    local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 == 0) goto LAB_007adbe4;
  }
  else {
    uVar7 = sVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar11 = operator_new(uVar7);
    local_80 = uVar7 | 1;
    local_78 = sVar4;
    local_70 = pvVar11;
  }
  memcpy(pvVar11,__s,sVar4);
LAB_007adbe4:
  *(undefined *)((long)pvVar11 + sVar4) = 0;
  local_98 = (void *)0x0;
  local_90 = (void *)0x0;
  local_88 = 0;
                    /* try { // try from 007adbf0 to 007adbff has its CatchHandler @ 007ade78 */
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  EntityRegistryManager::getEntitiesByTypes(this,0x800000000000000,(vector *)&local_98);
  pvVar2 = local_90;
  pvVar11 = local_98;
  local_b0 = (undefined8 *)0x0;
  local_a8 = (undefined8 *)0x0;
  local_a0 = (undefined8 *)0x0;
  uVar7 = (long)local_90 - (long)local_98;
  if (uVar7 != 0) {
    if ((long)uVar7 < 0) {
                    /* try { // try from 007ade0c to 007ade17 has its CatchHandler @ 007ade88 */
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
                    /* try { // try from 007adc1c to 007adc23 has its CatchHandler @ 007ade88 */
    local_b0 = (undefined8 *)operator_new(uVar7);
    local_a0 = local_b0 + ((long)uVar7 >> 3);
  }
  local_a8 = local_b0;
  if (pvVar2 != pvVar11) {
    uVar7 = 0;
    puVar6 = local_b0;
    do {
      uVar10 = *(undefined8 *)((long)pvVar11 + uVar7 * 8);
                    /* try { // try from 007adc80 to 007adc87 has its CatchHandler @ 007ade94 */
      uVar5 = NoteNode::getCreatedFromScript();
      __src = local_b0;
      puVar9 = puVar6;
      if ((uVar5 & 1) != 0) {
        if (puVar6 < local_a0) {
          puVar9 = puVar6 + 1;
          *puVar6 = uVar10;
          local_a8 = puVar9;
        }
        else {
          sVar4 = (long)puVar6 - (long)local_b0;
          uVar5 = ((long)sVar4 >> 3) + 1;
          if (uVar5 >> 0x3d != 0) {
                    /* try { // try from 007addf0 to 007ade03 has its CatchHandler @ 007ade90 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar8 = (long)local_a0 - (long)local_b0 >> 2;
          if (uVar5 <= uVar8) {
            uVar5 = uVar8;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)local_a0 - (long)local_b0)) {
            uVar5 = 0x1fffffffffffffff;
          }
          if (uVar5 == 0) {
            puVar6 = (undefined8 *)0x0;
          }
          else {
            if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 007adcd8 to 007adcdb has its CatchHandler @ 007ade8c */
            puVar6 = (undefined8 *)operator_new(uVar5 << 3);
          }
          puVar9 = puVar6 + ((long)sVar4 >> 3) + 1;
          puVar6[(long)sVar4 >> 3] = uVar10;
          if (0 < (long)sVar4) {
            memcpy(puVar6,__src,sVar4);
          }
          local_a0 = puVar6 + uVar5;
          local_b0 = puVar6;
          local_a8 = puVar9;
          if (__src != (undefined8 *)0x0) {
            operator_delete(__src);
          }
        }
      }
      uVar7 = (ulong)((int)uVar7 + 1);
      puVar6 = puVar9;
      pvVar11 = local_98;
    } while (uVar7 < (ulong)((long)local_90 - (long)local_98 >> 3));
  }
                    /* try { // try from 007add28 to 007add8f has its CatchHandler @ 007ade88 */
  uVar7 = I3DSave::saveI3DFile
                    ((vector *)&local_b0,"Exported note nodes","Script","1",*param_1,(vector *)0x0,
                     (char *)0x0,false,true,true,(ISaveCallback *)0x0);
  if ((uVar7 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 007ade28 to 007ade33 has its CatchHandler @ 007ade64 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error while saving i3d file.");
  }
  if (local_b0 != (undefined8 *)0x0) {
    local_a8 = local_b0;
    operator_delete(local_b0);
  }
  if (local_98 != (void *)0x0) {
    local_90 = local_98;
    operator_delete(local_98);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


