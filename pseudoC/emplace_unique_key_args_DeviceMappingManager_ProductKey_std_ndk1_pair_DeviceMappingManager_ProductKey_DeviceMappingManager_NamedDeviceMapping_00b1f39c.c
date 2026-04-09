// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<DeviceMappingManager::ProductKey,std::__ndk1::pair<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>>
// Entry Point: 00b1f39c
// Size: 368 bytes
// Signature: pair __thiscall __emplace_unique_key_args<DeviceMappingManager::ProductKey,std::__ndk1::pair<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>>(__tree<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>,std::__ndk1::__map_value_compare<DeviceMappingManager::ProductKey,std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>,std::__ndk1::less<DeviceMappingManager::ProductKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>>> * this, ProductKey * param_1, pair * param_2)


/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,
   DeviceMappingManager::NamedDeviceMapping>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,
   DeviceMappingManager::NamedDeviceMapping>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,
   DeviceMappingManager::NamedDeviceMapping>,
   std::__ndk1::__map_value_compare<DeviceMappingManager::ProductKey,
   std::__ndk1::__value_type<DeviceMappingManager::ProductKey,
   DeviceMappingManager::NamedDeviceMapping>, std::__ndk1::less<DeviceMappingManager::ProductKey>,
   true>, std::__ndk1::allocator<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,
   DeviceMappingManager::NamedDeviceMapping> >
   >::__emplace_unique_key_args<DeviceMappingManager::ProductKey,
   std::__ndk1::pair<DeviceMappingManager::ProductKey, DeviceMappingManager::NamedDeviceMapping>
   >(DeviceMappingManager::ProductKey const&, std::__ndk1::pair<DeviceMappingManager::ProductKey,
   DeviceMappingManager::NamedDeviceMapping>&&) */

pair __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>,std::__ndk1::__map_value_compare<DeviceMappingManager::ProductKey,std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>,std::__ndk1::less<DeviceMappingManager::ProductKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>>>
::
__emplace_unique_key_args<DeviceMappingManager::ProductKey,std::__ndk1::pair<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>>
          (__tree<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>,std::__ndk1::__map_value_compare<DeviceMappingManager::ProductKey,std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>,std::__ndk1::less<DeviceMappingManager::ProductKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>>>
           *this,ProductKey *param_1,pair *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined2 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar8 = (undefined8 *)(this + 8);
  puVar9 = (undefined8 *)*puVar8;
  puVar7 = puVar8;
  if (puVar9 == (undefined8 *)0x0) {
LAB_00b1f44c:
    puVar9 = (undefined8 *)*puVar8;
  }
  else {
    uVar3 = *(ushort *)param_1;
    uVar4 = *(ushort *)(param_1 + 2);
    puVar8 = (undefined8 *)(this + 8);
    do {
      while( true ) {
        puVar7 = puVar9;
        uVar5 = *(ushort *)(puVar7 + 4);
        if (uVar3 == uVar5) break;
        if (uVar3 < uVar5) goto LAB_00b1f418;
        if (uVar3 <= uVar5) goto LAB_00b1f44c;
LAB_00b1f434:
        puVar8 = puVar7 + 1;
        puVar9 = (undefined8 *)*puVar8;
        if ((undefined8 *)*puVar8 == (undefined8 *)0x0) goto LAB_00b1f44c;
      }
      uVar5 = *(ushort *)((long)puVar7 + 0x22);
      if (uVar4 != uVar5) {
        if (uVar4 < uVar5) goto LAB_00b1f418;
        if (uVar5 < uVar4) goto LAB_00b1f434;
        goto LAB_00b1f44c;
      }
      if (*(ushort *)((long)puVar7 + 0x24) <= *(ushort *)(param_1 + 4)) {
        if (*(ushort *)((long)puVar7 + 0x24) < *(ushort *)(param_1 + 4)) goto LAB_00b1f434;
        goto LAB_00b1f44c;
      }
LAB_00b1f418:
      puVar8 = puVar7;
      puVar9 = (undefined8 *)*puVar7;
    } while ((undefined8 *)*puVar7 != (undefined8 *)0x0);
    puVar9 = (undefined8 *)*puVar7;
  }
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)operator_new(0xc10);
    uVar6 = *(undefined2 *)(param_2 + 1);
    uVar11 = *(undefined8 *)(param_2 + 4);
    uVar10 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined8 *)(param_2 + 4) = 0;
    *(pair *)(puVar9 + 4) = *param_2;
    *(undefined2 *)((long)puVar9 + 0x24) = uVar6;
    uVar1 = *(undefined8 *)(param_2 + 10);
    uVar2 = *(undefined8 *)(param_2 + 0xc);
    puVar9[6] = uVar11;
    puVar9[5] = uVar10;
    uVar11 = *(undefined8 *)(param_2 + 8);
    uVar10 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_2 + 10) = 0;
    *(undefined8 *)(param_2 + 0xc) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    puVar9[9] = uVar1;
    puVar9[10] = uVar2;
    puVar9[8] = uVar11;
    puVar9[7] = uVar10;
    DeviceMappingManager::DeviceMapping::DeviceMapping
              ((DeviceMapping *)(puVar9 + 0xb),(DeviceMapping *)(param_2 + 0xe));
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = puVar7;
    *puVar8 = puVar9;
    puVar7 = puVar9;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      puVar7 = (undefined8 *)*puVar8;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar7);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  return (pair)puVar9;
}


