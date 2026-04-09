// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isStartBlocked
// Entry Point: 0073759c
// Size: 136 bytes
// Signature: undefined isStartBlocked(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VehicleNavigationAgent::isStartBlocked() const */

bool VehicleNavigationAgent::isStartBlocked(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  char cVar5;
  long in_x0;
  
  uVar1 = *(ushort *)(in_x0 + 0x1374);
  uVar2 = *(short *)(in_x0 + 0x1380) * *(short *)(in_x0 + 0x1370);
  uVar3 = *(short *)(in_x0 + 0x1372) * *(short *)(in_x0 + 0x1380);
  cVar5 = VehicleNavigationGridAdapter::getCellCost
                    (*(VehicleNavigationGridAdapter **)(in_x0 + 0x12a0),uVar2,uVar3,uVar1);
  if (cVar5 == -1) {
    cVar5 = VehicleNavigationGridAdapter::getCellCost
                      (*(VehicleNavigationGridAdapter **)(in_x0 + 0x12a0),uVar2,uVar3,uVar1 + 1 & 7)
    ;
    bVar4 = cVar5 == -1;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}


