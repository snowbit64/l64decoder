// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serializeDynamicsWorldInfo
// Entry Point: 00f37bb4
// Size: 220 bytes
// Signature: undefined __thiscall serializeDynamicsWorldInfo(btDiscreteDynamicsWorld * this, btSerializer * param_1)


/* btDiscreteDynamicsWorld::serializeDynamicsWorldInfo(btSerializer*) */

void __thiscall
btDiscreteDynamicsWorld::serializeDynamicsWorldInfo
          (btDiscreteDynamicsWorld *this,btSerializer *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  lVar2 = (**(code **)(*(long *)param_1 + 0x20))(param_1,0x68,1);
  puVar3 = *(undefined8 **)(lVar2 + 8);
  puVar3[0xc] = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  uVar1 = *(undefined4 *)(this + 0xa4);
  lVar4 = *(long *)param_1;
  *(undefined4 *)(puVar3 + 0xb) = *(undefined4 *)(this + 0x160);
  uVar5 = *(undefined4 *)(this + 0x164);
  *(undefined4 *)(puVar3 + 8) = uVar1;
  uVar7 = *(undefined8 *)(this + 0xd0);
  *(undefined4 *)((long)puVar3 + 0x5c) = uVar5;
  uVar6 = *(undefined4 *)(this + 0x168);
  *(undefined8 *)((long)puVar3 + 0x44) = uVar7;
  uVar1 = *(undefined4 *)(this + 0xd8);
  uVar5 = *(undefined4 *)(this + 0xbc);
  *(undefined4 *)(puVar3 + 0xc) = uVar6;
  uVar6 = *(undefined4 *)(this + 0x16c);
  *(undefined4 *)((long)puVar3 + 0x4c) = uVar1;
  *(undefined4 *)(puVar3 + 10) = uVar5;
  *(undefined4 *)((long)puVar3 + 100) = uVar6;
  uVar7 = *(undefined8 *)(this + 0x90);
  puVar3[1] = *(undefined8 *)(this + 0x98);
  *puVar3 = uVar7;
  *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(this + 0xa0);
  uVar7 = *(undefined8 *)(this + 0xa8);
  *(undefined8 *)((long)puVar3 + 0x1c) = *(undefined8 *)(this + 0xb0);
  *(undefined8 *)((long)puVar3 + 0x14) = uVar7;
  *(undefined4 *)((long)puVar3 + 0x24) = *(undefined4 *)(this + 0xb8);
  uVar7 = *(undefined8 *)(this + 0xc0);
  puVar3[6] = *(undefined8 *)(this + 200);
  puVar3[5] = uVar7;
  puVar3[7] = *(undefined8 *)(this + 0xdc);
                    /* WARNING: Could not recover jumptable at 0x00f37c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x28))(param_1,lVar2,"btDynamicsWorldFloatData",0x444c5744);
  return;
}


