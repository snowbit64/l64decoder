// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyNewBindings
// Entry Point: 00b1b57c
// Size: 344 bytes
// Signature: undefined applyNewBindings(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DeviceMappingManager::applyNewBindings() */

void DeviceMappingManager::applyNewBindings(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *in_x0;
  long lVar3;
  long lVar4;
  ulong uVar5;
  __tree_node **pp_Var6;
  byte local_78 [16];
  char *local_68;
  byte local_60 [16];
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pp_Var6 = (__tree_node **)(in_x0 + 1);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>,std::__ndk1::__map_value_compare<DeviceMappingManager::ProductKey,std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>,std::__ndk1::less<DeviceMappingManager::ProductKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>>>
  ::destroy((__tree<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>,std::__ndk1::__map_value_compare<DeviceMappingManager::ProductKey,std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>,std::__ndk1::less<DeviceMappingManager::ProductKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>>>
             *)in_x0,*pp_Var6);
  lVar3 = in_x0[3];
  lVar4 = in_x0[4];
  *in_x0 = pp_Var6;
  in_x0[2] = 0;
  *pp_Var6 = (__tree_node *)0x0;
  if (lVar4 != lVar3) {
    do {
      lVar4 = lVar4 + -0xbe8;
      FUN_00b1f010(in_x0 + 5,lVar4);
    } while (lVar4 != lVar3);
  }
  in_x0[4] = lVar3;
  FUN_006cadd8(local_60,in_x0 + 6,"inputDevicesManual/");
                    /* try { // try from 00b1b604 to 00b1b617 has its CatchHandler @ 00b1b6d4 */
  FUN_006cadd8(local_78,in_x0 + 6,"inputDevices/");
  pcVar1 = (char *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pcVar1 = local_50;
  }
                    /* try { // try from 00b1b62c to 00b1b653 has its CatchHandler @ 00b1b6e4 */
  loadDeviceMappings((DeviceMappingManager *)in_x0,pcVar1);
  pcVar1 = (char *)((ulong)local_78 | 1);
  if ((local_78[0] & 1) != 0) {
    pcVar1 = local_68;
  }
  loadDeviceMappings((DeviceMappingManager *)in_x0,pcVar1);
  lVar3 = in_x0[10];
  if (in_x0[0xb] != lVar3) {
    uVar5 = 0;
    do {
                    /* try { // try from 00b1b670 to 00b1b673 has its CatchHandler @ 00b1b6e8 */
      (**(code **)(**(long **)(lVar3 + uVar5 * 8) + 0x10))();
      lVar3 = in_x0[10];
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar5 < (ulong)(in_x0[0xb] - lVar3 >> 3));
  }
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


