// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serialize
// Entry Point: 0073675c
// Size: 808 bytes
// Signature: undefined __thiscall serialize(VehicleNavigationAgent * this, File * param_1)


/* VehicleNavigationAgent::serialize(File&) const */

void __thiscall VehicleNavigationAgent::serialize(VehicleNavigationAgent *this,File *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar3 = (**(code **)(*(long *)param_1 + 0x30))(param_1,*(long *)(this + 0x12a0) + 0xc,8);
  if (iVar3 == 8) {
    local_3c = *(undefined4 *)(*(long *)(this + 0x12a0) + 0x38);
    iVar3 = (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_3c,4);
    if (iVar3 == 4) {
      local_40 = *(undefined4 *)(*(long *)(this + 0x12a0) + 0x1c);
      iVar3 = (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_40,4);
      if ((iVar3 == 4) &&
         (iVar3 = (**(code **)(*(long *)param_1 + 0x30))(param_1,this + 0x139c,4), iVar3 == 4)) {
        local_44 = *(undefined4 *)(*(long *)(this + 0x12a0) + 0x2c);
        iVar3 = (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_44,4);
        if (iVar3 == 4) {
          local_48 = *(undefined4 *)(*(long *)(this + 0x12a0) + 0x3c);
          iVar3 = (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_48,4);
          if (((((iVar3 == 4) &&
                (iVar3 = (**(code **)(*(long *)param_1 + 0x30))(param_1,this + 0x137c,4), iVar3 == 4
                )) && (iVar3 = (**(code **)(*(long *)param_1 + 0x30))(param_1,this + 0x1380,2),
                      iVar3 == 2)) &&
              ((((iVar3 = (**(code **)(*(long *)param_1 + 0x30))(param_1,this + 0x1382,1),
                 iVar3 == 1 &&
                 (iVar3 = (**(code **)(*(long *)param_1 + 0x30))(param_1,this + 0x1394,4),
                 iVar3 == 4)) &&
                ((iVar3 = (**(code **)(*(long *)param_1 + 0x30))(param_1,this + 0x1398,4),
                 iVar3 == 4 &&
                 ((iVar3 = (**(code **)(*(long *)param_1 + 0x30))(param_1,this + 0x13a0,4),
                  iVar3 == 4 &&
                  (iVar3 = (**(code **)(*(long *)param_1 + 0x30))(param_1,this + 0x13a8,8),
                  iVar3 == 8)))))) &&
               (iVar3 = (**(code **)(*(long *)param_1 + 0x30))(param_1,this + 0x13b0,0x30),
               iVar3 == 0x30)))) &&
             ((((iVar3 = (**(code **)(*(long *)param_1 + 0x30))(param_1,this + 0x1310,0x50),
                iVar3 == 0x50 &&
                (iVar3 = (**(code **)(*(long *)param_1 + 0x30))(param_1,this + 0x1360,0x10),
                iVar3 == 0x10)) &&
               (bVar2 = SerializationUtil::write<OrientedBox,std::__ndk1::allocator<OrientedBox>>
                                  (param_1,(vector *)(this + 0x12d8)), bVar2)) &&
              ((bVar2 = SerializationUtil::write<OrientedBox,std::__ndk1::allocator<OrientedBox>>
                                  (param_1,(vector *)(this + 0x12f0)), bVar2 &&
               (iVar3 = (**(code **)(*(long *)param_1 + 0x30))(param_1,this + 0x1308,4), iVar3 == 4)
               ))))) {
            iVar3 = (**(code **)(*(long *)param_1 + 0x30))(param_1,this + 0x130c,4);
            bVar2 = iVar3 == 4;
            goto LAB_00736a5c;
          }
        }
      }
    }
  }
  bVar2 = false;
LAB_00736a5c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


