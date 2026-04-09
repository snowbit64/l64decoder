// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serialize
// Entry Point: 00f76ae4
// Size: 6248 bytes
// Signature: undefined __thiscall serialize(btSoftBody * this, void * param_1, btSerializer * param_2)


/* btSoftBody::serialize(void*, btSerializer*) const */

char * __thiscall btSoftBody::serialize(btSoftBody *this,void *param_1,btSerializer *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  int *piVar23;
  undefined4 *puVar24;
  long lVar25;
  long lVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  long local_100;
  int local_f4;
  btHashMap<btHashPtr,int> abStack_f0 [4];
  undefined8 local_ec;
  long local_e0;
  char local_d8;
  undefined8 local_cc;
  long local_c0;
  char local_b8;
  undefined8 local_ac;
  long local_a0;
  char local_98;
  undefined8 local_8c;
  long local_80;
  char local_78;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  btCollisionObject::serialize((btCollisionObject *)this,param_1,param_2);
  local_e0 = 0;
  local_c0 = 0;
  local_a0 = 0;
  local_d8 = '\x01';
  local_b8 = '\x01';
  local_98 = '\x01';
  local_78 = '\x01';
  iVar14 = *(int *)(this + 0x474);
  local_ec = 0;
  local_cc = 0;
  local_ac = 0;
  local_80 = 0;
  local_8c = 0;
  *(int *)((long)param_1 + 0x158) = iVar14;
  if (iVar14 == 0) {
    *(undefined8 *)((long)param_1 + 0x118) = 0;
  }
  else {
    lVar9 = (**(code **)(*(long *)param_2 + 0x38))(param_2,this + 0x470);
    *(long *)((long)param_1 + 0x118) = lVar9;
    if (lVar9 != 0) {
      uVar4 = *(uint *)((long)param_1 + 0x158);
      lVar9 = (**(code **)(*(long *)param_2 + 0x20))(param_2,8,(ulong)uVar4);
      if (0 < (int)uVar4) {
        lVar25 = 0;
        lVar26 = *(long *)(lVar9 + 8);
        do {
          lVar22 = *(long *)(*(long *)(this + 0x480) + lVar25);
          if (lVar22 == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = (**(code **)(*(long *)param_2 + 0x38))(param_2,lVar22);
          }
          *(undefined8 *)(lVar26 + lVar25) = uVar10;
          lVar11 = (**(code **)(*(long *)param_2 + 0x30))(param_2,lVar22);
          if (lVar11 == 0) {
            lVar11 = (**(code **)(*(long *)param_2 + 0x20))(param_2,0x10,1);
            puVar15 = *(undefined8 **)(lVar11 + 8);
            *(undefined4 *)((long)puVar15 + 0xc) = *(undefined4 *)(lVar22 + 0x14);
            *puVar15 = *(undefined8 *)(lVar22 + 8);
            *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(lVar22 + 0x10);
            (**(code **)(*(long *)param_2 + 0x28))
                      (param_2,lVar11,"SoftBodyMaterialData",0x544d4253,lVar22);
          }
          lVar25 = lVar25 + 8;
        } while ((ulong)uVar4 * 8 - lVar25 != 0);
      }
      (**(code **)(*(long *)param_2 + 0x28))
                (param_2,lVar9,"SoftBodyMaterialData",0x59415241,this + 0x470);
    }
  }
  iVar14 = *(int *)(this + 0x374);
  *(int *)((long)param_1 + 0x15c) = iVar14;
  if (iVar14 == 0) {
    *(undefined8 *)((long)param_1 + 0x120) = 0;
  }
  else {
    lVar9 = (**(code **)(*(long *)param_2 + 0x38))(param_2,this + 0x370);
    *(long *)((long)param_1 + 0x120) = lVar9;
    if (lVar9 != 0) {
      iVar14 = *(int *)((long)param_1 + 0x15c);
      lVar9 = (**(code **)(*(long *)param_2 + 0x20))(param_2,0x68,iVar14);
      local_f4 = 0;
      if (0 < iVar14) {
        puVar24 = (undefined4 *)(*(long *)(lVar9 + 8) + 0x30);
        do {
          lVar25 = *(long *)(this + 0x380);
          lVar26 = lVar25 + (long)local_f4 * 0x78;
          puVar24[2] = *(undefined4 *)(lVar26 + 0x40);
          puVar24[3] = *(undefined4 *)(lVar26 + 0x44);
          puVar24[4] = *(undefined4 *)(lVar26 + 0x48);
          puVar24[5] = *(undefined4 *)(lVar26 + 0x4c);
          puVar24[0xb] = *(undefined4 *)(lVar26 + 100);
          puVar24[0xc] = -(*(byte *)(lVar26 + 0x70) & 1);
          puVar24[10] = *(undefined4 *)(lVar26 + 0x60);
          if (*(long *)(lVar26 + 8) == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = (**(code **)(*(long *)param_2 + 0x38))(param_2);
            lVar25 = *(long *)(this + 0x380);
          }
          local_100 = lVar25 + (long)local_f4 * 0x78;
          *(undefined8 *)(puVar24 + -0xc) = uVar10;
          puVar24[6] = *(undefined4 *)(local_100 + 0x50);
          puVar24[7] = *(undefined4 *)(local_100 + 0x54);
          puVar24[8] = *(undefined4 *)(local_100 + 0x58);
          puVar24[9] = *(undefined4 *)(local_100 + 0x5c);
          puVar24[-10] = *(undefined4 *)(local_100 + 0x10);
          puVar24[-9] = *(undefined4 *)(local_100 + 0x14);
          puVar24[-8] = *(undefined4 *)(local_100 + 0x18);
          puVar24[-7] = *(undefined4 *)(local_100 + 0x1c);
          puVar24[-6] = *(undefined4 *)(local_100 + 0x20);
          puVar24[-5] = *(undefined4 *)(local_100 + 0x24);
          puVar24[-4] = *(undefined4 *)(local_100 + 0x28);
          puVar24[-3] = *(undefined4 *)(local_100 + 0x2c);
          puVar24[-2] = *(undefined4 *)(local_100 + 0x30);
          puVar24[-1] = *(undefined4 *)(local_100 + 0x34);
          *puVar24 = *(undefined4 *)(local_100 + 0x38);
          puVar24[1] = *(undefined4 *)(local_100 + 0x3c);
          btHashMap<btHashPtr,int>::insert(abStack_f0,(btHashPtr *)&local_100,&local_f4);
          puVar24 = puVar24 + 0x1a;
          local_f4 = local_f4 + 1;
        } while (local_f4 < iVar14);
      }
      (**(code **)(*(long *)param_2 + 0x28))
                (param_2,lVar9,"SoftBodyNodeData",0x444e4253,this + 0x370);
    }
  }
  iVar14 = *(int *)(this + 0x394);
  *(int *)((long)param_1 + 0x160) = iVar14;
  if (iVar14 == 0) {
    *(undefined8 *)((long)param_1 + 0x128) = 0;
  }
  else {
    lVar9 = (**(code **)(*(long *)param_2 + 0x38))(param_2,*(undefined8 *)(this + 0x3a0));
    *(long *)((long)param_1 + 0x128) = lVar9;
    if (lVar9 != 0) {
      uVar4 = *(uint *)((long)param_1 + 0x160);
      lVar9 = (**(code **)(*(long *)param_2 + 0x20))(param_2,0x18,(ulong)uVar4);
      if ((int)uVar4 < 1) {
        lVar25 = *(long *)(this + 0x3a0);
      }
      else {
        lVar26 = 0;
        lVar25 = *(long *)(this + 0x3a0);
        piVar23 = (int *)(*(long *)(lVar9 + 8) + 0xc);
        do {
          piVar23[2] = -(*(byte *)(lVar25 + lVar26 + 0x24) & 1);
          if (*(long *)(lVar25 + lVar26 + 8) == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = (**(code **)(*(long *)param_2 + 0x38))(param_2);
            lVar25 = *(long *)(this + 0x3a0);
          }
          *(undefined8 *)(piVar23 + -3) = uVar10;
          lVar22 = *(long *)(lVar25 + lVar26 + 0x10);
          if (lVar22 == 0) {
            iVar14 = -1;
          }
          else {
            iVar14 = (int)(lVar22 - *(long *)(this + 0x380) >> 3) * -0x11111111;
          }
          piVar23[-1] = iVar14;
          lVar22 = *(long *)(lVar25 + lVar26 + 0x18);
          if (lVar22 == 0) {
            iVar14 = -1;
          }
          else {
            iVar14 = (int)(lVar22 - *(long *)(this + 0x380) >> 3) * -0x11111111;
          }
          lVar22 = lVar25 + lVar26;
          *piVar23 = iVar14;
          lVar26 = lVar26 + 0x48;
          piVar23[1] = *(int *)(lVar22 + 0x20);
          piVar23 = piVar23 + 6;
        } while ((ulong)uVar4 * 0x48 - lVar26 != 0);
      }
      (**(code **)(*(long *)param_2 + 0x28))(param_2,lVar9,"SoftBodyLinkData",0x59415241,lVar25);
    }
  }
  iVar14 = *(int *)(this + 0x3b4);
  *(int *)((long)param_1 + 0x164) = iVar14;
  if (iVar14 == 0) {
    *(undefined8 *)((long)param_1 + 0x130) = 0;
  }
  else {
    lVar9 = (**(code **)(*(long *)param_2 + 0x38))(param_2,*(undefined8 *)(this + 0x3c0));
    *(long *)((long)param_1 + 0x130) = lVar9;
    if (lVar9 != 0) {
      uVar4 = *(uint *)((long)param_1 + 0x164);
      lVar9 = (**(code **)(*(long *)param_2 + 0x20))(param_2,0x28,(ulong)uVar4);
      if ((int)uVar4 < 1) {
        lVar25 = *(long *)(this + 0x3c0);
      }
      else {
        lVar26 = 0;
        lVar25 = *(long *)(this + 0x3c0);
        piVar23 = (int *)(*(long *)(lVar9 + 8) + 0x18);
        do {
          if (*(long *)(lVar25 + lVar26 + 8) == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = (**(code **)(*(long *)param_2 + 0x38))(param_2);
            lVar25 = *(long *)(this + 0x3c0);
          }
          lVar22 = lVar25 + lVar26;
          *(undefined8 *)(piVar23 + -2) = uVar10;
          piVar23[-6] = *(int *)(lVar22 + 0x28);
          piVar23[-5] = *(int *)(lVar22 + 0x2c);
          piVar23[-4] = *(int *)(lVar22 + 0x30);
          piVar23[-3] = *(int *)(lVar22 + 0x34);
          lVar11 = *(long *)(this + 0x380);
          if (*(long *)(lVar22 + 0x10) == 0) {
            iVar14 = -1;
          }
          else {
            iVar14 = (int)(*(long *)(lVar22 + 0x10) - lVar11 >> 3) * -0x11111111;
          }
          *piVar23 = iVar14;
          if (*(long *)(lVar22 + 0x18) == 0) {
            iVar14 = -1;
          }
          else {
            iVar14 = (int)(*(long *)(lVar22 + 0x18) - lVar11 >> 3) * -0x11111111;
          }
          lVar22 = lVar25 + lVar26;
          piVar23[1] = iVar14;
          lVar17 = *(long *)(lVar22 + 0x20);
          if (lVar17 == 0) {
            iVar14 = -1;
          }
          else {
            iVar14 = (int)(lVar17 - lVar11 >> 3) * -0x11111111;
          }
          piVar23[2] = iVar14;
          lVar26 = lVar26 + 0x48;
          piVar23[3] = *(int *)(lVar22 + 0x38);
          piVar23 = piVar23 + 10;
        } while ((ulong)uVar4 * 0x48 - lVar26 != 0);
      }
      (**(code **)(*(long *)param_2 + 0x28))(param_2,lVar9,"SoftBodyFaceData",0x59415241,lVar25);
    }
  }
  iVar14 = *(int *)(this + 0x3d4);
  *(int *)((long)param_1 + 0x168) = iVar14;
  if (iVar14 == 0) {
    *(undefined8 *)((long)param_1 + 0x138) = 0;
  }
  else {
    lVar9 = (**(code **)(*(long *)param_2 + 0x38))(param_2,*(undefined8 *)(this + 0x3e0));
    *(long *)((long)param_1 + 0x138) = lVar9;
    if (lVar9 != 0) {
      uVar4 = *(uint *)((long)param_1 + 0x168);
      lVar9 = (**(code **)(*(long *)param_2 + 0x20))(param_2,0x68,(ulong)uVar4);
      if ((int)uVar4 < 1) {
        lVar25 = *(long *)(this + 0x3e0);
      }
      else {
        lVar26 = 0;
        puVar24 = *(undefined4 **)(lVar9 + 8);
        lVar25 = *(long *)(this + 0x3e0);
        do {
          lVar22 = lVar25 + lVar26;
          lVar11 = *(long *)(this + 0x380);
          *puVar24 = *(undefined4 *)(lVar22 + 0x40);
          puVar24[1] = *(undefined4 *)(lVar22 + 0x44);
          puVar24[2] = *(undefined4 *)(lVar22 + 0x48);
          puVar24[3] = *(undefined4 *)(lVar22 + 0x4c);
          if (*(long *)(lVar25 + 0x10) == 0) {
            iVar14 = -1;
          }
          else {
            iVar14 = (int)(*(long *)(lVar25 + 0x10) - lVar11 >> 3) * -0x11111111;
          }
          puVar24[0x12] = iVar14;
          puVar24[4] = *(undefined4 *)(lVar22 + 0x50);
          puVar24[5] = *(undefined4 *)(lVar22 + 0x54);
          puVar24[6] = *(undefined4 *)(lVar22 + 0x58);
          puVar24[7] = *(undefined4 *)(lVar22 + 0x5c);
          if (*(long *)(lVar25 + 0xa0) == 0) {
            iVar14 = -1;
          }
          else {
            iVar14 = (int)(*(long *)(lVar25 + 0xa0) - lVar11 >> 3) * -0x11111111;
          }
          lVar22 = lVar25 + lVar26;
          puVar24[0x13] = iVar14;
          puVar24[8] = *(undefined4 *)(lVar22 + 0x60);
          puVar24[9] = *(undefined4 *)(lVar22 + 100);
          puVar24[10] = *(undefined4 *)(lVar22 + 0x68);
          puVar24[0xb] = *(undefined4 *)(lVar22 + 0x6c);
          if (*(long *)(lVar25 + 0x130) == 0) {
            iVar14 = -1;
          }
          else {
            iVar14 = (int)(*(long *)(lVar25 + 0x130) - lVar11 >> 3) * -0x11111111;
          }
          puVar24[0x14] = iVar14;
          puVar24[0xc] = *(undefined4 *)(lVar22 + 0x70);
          puVar24[0xd] = *(undefined4 *)(lVar22 + 0x74);
          puVar24[0xe] = *(undefined4 *)(lVar22 + 0x78);
          puVar24[0xf] = *(undefined4 *)(lVar22 + 0x7c);
          if (*(long *)(lVar25 + 0x1c0) == 0) {
            iVar14 = -1;
          }
          else {
            iVar14 = (int)(*(long *)(lVar25 + 0x1c0) - lVar11 >> 3) * -0x11111111;
          }
          puVar24[0x15] = iVar14;
          *(undefined8 *)(puVar24 + 0x17) = *(undefined8 *)(lVar25 + lVar26 + 0x80);
          if (*(long *)(lVar25 + lVar26 + 8) == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = (**(code **)(*(long *)param_2 + 0x38))(param_2);
            lVar25 = *(long *)(this + 0x3e0);
          }
          lVar22 = lVar25 + lVar26;
          *(undefined8 *)(puVar24 + 0x10) = uVar10;
          lVar26 = lVar26 + 0x88;
          puVar24[0x16] = *(undefined4 *)(lVar22 + 0x30);
          puVar24 = puVar24 + 0x1a;
        } while ((ulong)uVar4 * 0x88 - lVar26 != 0);
      }
      (**(code **)(*(long *)param_2 + 0x28))(param_2,lVar9,"SoftBodyTetraData",0x59415241,lVar25);
    }
  }
  iVar14 = *(int *)(this + 0x3f4);
  *(int *)((long)param_1 + 0x16c) = iVar14;
  if (iVar14 == 0) {
    *(undefined8 *)((long)param_1 + 0x140) = 0;
  }
  else {
    lVar9 = (**(code **)(*(long *)param_2 + 0x38))(param_2,*(undefined8 *)(this + 0x400));
    *(long *)((long)param_1 + 0x140) = lVar9;
    if (lVar9 != 0) {
      uVar4 = *(uint *)((long)param_1 + 0x16c);
      lVar9 = (**(code **)(*(long *)param_2 + 0x20))(param_2,0x60,(ulong)uVar4);
      if (0 < (int)uVar4) {
        lVar25 = 0;
        puVar24 = *(undefined4 **)(lVar9 + 8);
        do {
          plVar3 = (long *)(*(long *)(this + 0x400) + lVar25);
          *puVar24 = *(undefined4 *)((long)plVar3 + 0x24);
          puVar24[1] = *(undefined4 *)(plVar3 + 5);
          puVar24[2] = *(undefined4 *)((long)plVar3 + 0x2c);
          puVar24[3] = *(undefined4 *)(plVar3 + 6);
          puVar24[4] = *(undefined4 *)((long)plVar3 + 0x34);
          puVar24[5] = *(undefined4 *)(plVar3 + 7);
          puVar24[6] = *(undefined4 *)((long)plVar3 + 0x3c);
          puVar24[7] = *(undefined4 *)(plVar3 + 8);
          puVar24[8] = *(undefined4 *)((long)plVar3 + 0x44);
          puVar24[9] = *(undefined4 *)(plVar3 + 9);
          puVar24[10] = *(undefined4 *)((long)plVar3 + 0x4c);
          puVar24[0xb] = *(undefined4 *)(plVar3 + 10);
          puVar24[0xc] = *(undefined4 *)((long)plVar3 + 0x54);
          puVar24[0xd] = *(undefined4 *)(plVar3 + 0xb);
          puVar24[0xe] = *(undefined4 *)((long)plVar3 + 0x5c);
          puVar24[0xf] = *(undefined4 *)(plVar3 + 0xc);
          puVar24[0x17] = *(undefined4 *)((long)plVar3 + 100);
          puVar24[0x10] = *(undefined4 *)(plVar3 + 1);
          puVar24[0x11] = *(undefined4 *)((long)plVar3 + 0xc);
          puVar24[0x12] = *(undefined4 *)(plVar3 + 2);
          puVar24[0x13] = *(undefined4 *)((long)plVar3 + 0x14);
          if (*plVar3 == 0) {
            iVar14 = -1;
          }
          else {
            iVar14 = (int)(*plVar3 - *(long *)(this + 0x380) >> 3) * -0x11111111;
          }
          puVar24[0x16] = iVar14;
          if (plVar3[3] == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = (**(code **)(*(long *)param_2 + 0x38))(param_2);
          }
          *(undefined8 *)(puVar24 + 0x14) = uVar10;
          lVar25 = lVar25 + 0x68;
          puVar24 = puVar24 + 0x18;
        } while ((ulong)uVar4 * 0x68 - lVar25 != 0);
      }
      (**(code **)(*(long *)param_2 + 0x28))
                (param_2,lVar9,"SoftRigidAnchorData",0x59415241,*(undefined8 *)(this + 0x400));
    }
  }
  *(undefined4 *)((long)param_1 + 0x194) = *(undefined4 *)(this + 0x194);
  *(undefined4 *)((long)param_1 + 0x17c) = *(undefined4 *)(this + 0x17c);
  *(undefined4 *)((long)param_1 + 0x18c) = *(undefined4 *)(this + 0x18c);
  *(undefined4 *)((long)param_1 + 0x178) = *(undefined4 *)(this + 0x178);
  *(undefined8 *)((long)param_1 + 0x184) = *(undefined8 *)(this + 0x184);
  uVar10 = *(undefined8 *)(this + 0x1cc);
  *(undefined8 *)((long)param_1 + 0x1d4) = *(undefined8 *)(this + 0x1d4);
  *(undefined8 *)((long)param_1 + 0x1cc) = uVar10;
  uVar29 = *(undefined4 *)(this + 0x1c4);
  *(undefined4 *)((long)param_1 + 0x180) = *(undefined4 *)(this + 0x180);
  *(undefined4 *)((long)param_1 + 0x198) = *(undefined4 *)(this + 0x198);
  *(undefined4 *)((long)param_1 + 0x1dc) = *(undefined4 *)(this + 0x1dc);
  *(undefined4 *)((long)param_1 + 400) = *(undefined4 *)(this + 400);
  uVar10 = *(undefined8 *)(this + 0x19c);
  *(undefined8 *)((long)param_1 + 0x1a4) = *(undefined8 *)(this + 0x1a4);
  *(undefined8 *)((long)param_1 + 0x19c) = uVar10;
  uVar27 = *(undefined4 *)(this + 0x1c8);
  *(undefined4 *)((long)param_1 + 0x1c4) = uVar29;
  *(undefined4 *)((long)param_1 + 0x1c8) = uVar27;
  uVar10 = *(undefined8 *)(this + 0x1ac);
  *(undefined8 *)((long)param_1 + 0x1b4) = *(undefined8 *)(this + 0x1b4);
  *(undefined8 *)((long)param_1 + 0x1ac) = uVar10;
  *(undefined8 *)((long)param_1 + 0x1bc) = *(undefined8 *)(this + 0x1bc);
  uVar10 = (**(code **)(*(long *)param_2 + 0x38))(param_2,this + 600);
  *(undefined8 *)((long)param_1 + 0x110) = uVar10;
  lVar9 = (**(code **)(*(long *)param_2 + 0x20))(param_2,200,1);
  puVar24 = *(undefined4 **)(lVar9 + 8);
  puVar24[0x18] = *(undefined4 *)(this + 0x310);
  puVar24[0x19] = *(undefined4 *)(this + 0x314);
  puVar24[0x1a] = *(undefined4 *)(this + 0x318);
  puVar24[0x1b] = *(undefined4 *)(this + 0x31c);
  puVar24[0x1c] = *(undefined4 *)(this + 800);
  puVar24[0x1d] = *(undefined4 *)(this + 0x324);
  puVar24[0x1e] = *(undefined4 *)(this + 0x328);
  puVar24[0x1f] = *(undefined4 *)(this + 0x32c);
  puVar24[0x20] = *(undefined4 *)(this + 0x330);
  puVar24[0x21] = *(undefined4 *)(this + 0x334);
  puVar24[0x22] = *(undefined4 *)(this + 0x338);
  puVar24[0x23] = *(undefined4 *)(this + 0x33c);
  puVar24[0x2f] = (uint)(byte)this[0x259];
  puVar24[0x2e] = (uint)(byte)this[600];
  puVar24[0x24] = *(undefined4 *)(this + 0x2a0);
  puVar24[0x25] = *(undefined4 *)(this + 0x2a4);
  puVar24[0x26] = *(undefined4 *)(this + 0x2a8);
  puVar24[0x27] = *(undefined4 *)(this + 0x2ac);
  iVar14 = *(int *)(this + 0x264);
  puVar24[0x2c] = iVar14;
  if (iVar14 == 0) {
    *(undefined8 *)(puVar24 + 0x28) = 0;
  }
  else {
    uVar10 = (**(code **)(*(long *)param_2 + 0x38))(param_2,*(undefined8 *)(this + 0x270));
    uVar4 = puVar24[0x2c];
    uVar21 = (ulong)uVar4;
    *(undefined8 *)(puVar24 + 0x28) = uVar10;
    if (uVar4 != 0) {
      lVar25 = (**(code **)(*(long *)param_2 + 0x20))(param_2,0x10,uVar4);
      puVar12 = *(undefined4 **)(this + 0x270);
      if (0 < (int)uVar4) {
        puVar13 = *(undefined4 **)(lVar25 + 8);
        if ((uVar4 < 8) || ((puVar13 < puVar12 + uVar21 * 4 && (puVar12 < puVar13 + uVar21 * 4)))) {
          uVar16 = 0;
        }
        else {
          uVar16 = uVar21 & 0xfffffff8;
          puVar15 = (undefined8 *)(puVar12 + 0x10);
          puVar19 = (undefined8 *)(puVar13 + 0x10);
          uVar18 = uVar16;
          do {
            uVar31 = puVar15[-7];
            uVar30 = puVar15[-8];
            uVar28 = puVar15[-5];
            uVar10 = puVar15[-6];
            uVar18 = uVar18 - 8;
            puVar8 = puVar15 + -3;
            uVar34 = puVar15[-4];
            uVar33 = puVar15[-1];
            uVar32 = puVar15[-2];
            uVar38 = puVar15[1];
            uVar37 = *puVar15;
            uVar36 = puVar15[3];
            uVar35 = puVar15[2];
            uVar42 = puVar15[5];
            uVar41 = puVar15[4];
            uVar40 = puVar15[7];
            uVar39 = puVar15[6];
            puVar15 = puVar15 + 0x10;
            puVar19[-3] = *puVar8;
            puVar19[-4] = uVar34;
            puVar19[-1] = uVar33;
            puVar19[-2] = uVar32;
            puVar19[-7] = uVar31;
            puVar19[-8] = uVar30;
            puVar19[-5] = uVar28;
            puVar19[-6] = uVar10;
            puVar19[5] = uVar42;
            puVar19[4] = uVar41;
            puVar19[7] = uVar40;
            puVar19[6] = uVar39;
            puVar19[1] = uVar38;
            *puVar19 = uVar37;
            puVar19[3] = uVar36;
            puVar19[2] = uVar35;
            puVar19 = puVar19 + 0x10;
          } while (uVar18 != 0);
          if (uVar16 == uVar21) goto LAB_00f776d4;
          puVar13 = puVar13 + uVar16 * 4;
        }
        lVar26 = uVar21 - uVar16;
        puVar12 = puVar12 + uVar16 * 4 + 2;
        do {
          lVar26 = lVar26 + -1;
          *puVar13 = puVar12[-2];
          puVar13[1] = puVar12[-1];
          puVar13[2] = *puVar12;
          puVar1 = puVar12 + 1;
          puVar12 = puVar12 + 4;
          puVar13[3] = *puVar1;
          puVar13 = puVar13 + 4;
        } while (lVar26 != 0);
      }
LAB_00f776d4:
      (**(code **)(*(long *)param_2 + 0x28))(param_2,lVar25,"btVector3FloatData",0x59415241);
    }
  }
  puVar24[0x30] = *(undefined4 *)(this + 0x25c);
  *puVar24 = *(undefined4 *)(this + 0x2b0);
  puVar24[1] = *(undefined4 *)(this + 0x2b4);
  puVar24[2] = *(undefined4 *)(this + 0x2b8);
  puVar24[3] = *(undefined4 *)(this + 700);
  puVar24[4] = *(undefined4 *)(this + 0x2c0);
  puVar24[5] = *(undefined4 *)(this + 0x2c4);
  puVar24[6] = *(undefined4 *)(this + 0x2c8);
  puVar24[7] = *(undefined4 *)(this + 0x2cc);
  puVar24[8] = *(undefined4 *)(this + 0x2d0);
  puVar24[9] = *(undefined4 *)(this + 0x2d4);
  puVar24[10] = *(undefined4 *)(this + 0x2d8);
  puVar24[0xb] = *(undefined4 *)(this + 0x2dc);
  puVar24[0xc] = *(undefined4 *)(this + 0x2e0);
  puVar24[0xd] = *(undefined4 *)(this + 0x2e4);
  puVar24[0xe] = *(undefined4 *)(this + 0x2e8);
  puVar24[0xf] = *(undefined4 *)(this + 0x2ec);
  puVar24[0x10] = *(undefined4 *)(this + 0x2f0);
  puVar24[0x11] = *(undefined4 *)(this + 0x2f4);
  puVar24[0x12] = *(undefined4 *)(this + 0x2f8);
  puVar24[0x13] = *(undefined4 *)(this + 0x2fc);
  puVar24[0x14] = *(undefined4 *)(this + 0x300);
  puVar24[0x15] = *(undefined4 *)(this + 0x304);
  puVar24[0x16] = *(undefined4 *)(this + 0x308);
  puVar24[0x17] = *(undefined4 *)(this + 0x30c);
  iVar14 = *(int *)(this + 0x284);
  puVar24[0x2d] = iVar14;
  if (iVar14 == 0) {
    *(undefined8 *)(puVar24 + 0x2a) = 0;
    goto LAB_00f77884;
  }
  uVar10 = (**(code **)(*(long *)param_2 + 0x38))(param_2,*(undefined8 *)(this + 0x290));
  uVar4 = puVar24[0x2d];
  uVar21 = (ulong)uVar4;
  *(undefined8 *)(puVar24 + 0x2a) = uVar10;
  if (uVar4 == 0) goto LAB_00f77884;
  lVar25 = (**(code **)(*(long *)param_2 + 0x20))(param_2,4,uVar4);
  puVar24 = *(undefined4 **)(this + 0x290);
  if (0 < (int)uVar4) {
    puVar12 = *(undefined4 **)(lVar25 + 8);
    if ((uVar4 < 8) || ((puVar12 < puVar24 + uVar21 && (puVar24 < puVar12 + uVar21)))) {
      uVar16 = 0;
    }
    else {
      uVar16 = uVar21 & 0xfffffff8;
      puVar15 = (undefined8 *)(puVar24 + 4);
      puVar19 = (undefined8 *)(puVar12 + 4);
      uVar18 = uVar16;
      do {
        puVar8 = puVar15 + -1;
        uVar10 = puVar15[-2];
        uVar30 = puVar15[1];
        uVar28 = *puVar15;
        uVar18 = uVar18 - 8;
        puVar15 = puVar15 + 4;
        puVar19[-1] = *puVar8;
        puVar19[-2] = uVar10;
        puVar19[1] = uVar30;
        *puVar19 = uVar28;
        puVar19 = puVar19 + 4;
      } while (uVar18 != 0);
      if (uVar16 == uVar21) goto LAB_00f7785c;
      puVar12 = puVar12 + uVar16;
    }
    lVar26 = uVar21 - uVar16;
    puVar24 = puVar24 + uVar16;
    do {
      lVar26 = lVar26 + -1;
      *puVar12 = *puVar24;
      puVar12 = puVar12 + 1;
      puVar24 = puVar24 + 1;
    } while (lVar26 != 0);
  }
LAB_00f7785c:
  (**(code **)(*(long *)param_2 + 0x28))(param_2,lVar25,"float",0x59415241);
LAB_00f77884:
  (**(code **)(*(long *)param_2 + 0x28))(param_2,lVar9,"SoftBodyPoseData",0x59415241,this + 600);
  iVar14 = *(int *)(this + 0x5dc);
  *(int *)((long)param_1 + 0x170) = iVar14;
  if (iVar14 == 0) {
    *(undefined8 *)((long)param_1 + 0x148) = 0;
  }
  else {
    uVar10 = (**(code **)(*(long *)param_2 + 0x38))(param_2,**(undefined8 **)(this + 0x5e8));
    uVar4 = *(uint *)((long)param_1 + 0x170);
    *(undefined8 *)((long)param_1 + 0x148) = uVar10;
    if (uVar4 != 0) {
      lVar9 = (**(code **)(*(long *)param_2 + 0x20))(param_2,0x168,uVar4);
      if (0 < (int)uVar4) {
        uVar21 = 0;
        puVar24 = *(undefined4 **)(lVar9 + 8);
        do {
          lVar25 = *(long *)(*(long *)(this + 0x5e8) + uVar21 * 8);
          puVar24[0x53] = *(undefined4 *)(lVar25 + 400);
          puVar24[0x40] = *(undefined4 *)(lVar25 + 0x170);
          puVar24[0x41] = *(undefined4 *)(lVar25 + 0x174);
          puVar24[0x42] = *(undefined4 *)(lVar25 + 0x178);
          puVar24[0x43] = *(undefined4 *)(lVar25 + 0x17c);
          puVar24[0x59] = *(undefined4 *)(lVar25 + 0x1a4);
          puVar24[0x58] = (uint)*(byte *)(lVar25 + 0x1a1);
          puVar24[0x28] = *(undefined4 *)(lVar25 + 0x108);
          puVar24[0x29] = *(undefined4 *)(lVar25 + 0x10c);
          puVar24[0x2a] = *(undefined4 *)(lVar25 + 0x110);
          puVar24[0x2b] = *(undefined4 *)(lVar25 + 0x114);
          puVar24[0x57] = (uint)*(byte *)(lVar25 + 0x1a0);
          puVar24[0x34] = *(undefined4 *)(lVar25 + 0x138);
          puVar24[0x35] = *(undefined4 *)(lVar25 + 0x13c);
          puVar24[0x36] = *(undefined4 *)(lVar25 + 0x140);
          puVar24[0x37] = *(undefined4 *)(lVar25 + 0x144);
          puVar24[0x38] = *(undefined4 *)(lVar25 + 0x148);
          puVar24[0x39] = *(undefined4 *)(lVar25 + 0x14c);
          puVar24[0x3a] = *(undefined4 *)(lVar25 + 0x150);
          puVar24[0x3b] = *(undefined4 *)(lVar25 + 0x154);
          *puVar24 = *(undefined4 *)(lVar25 + 0x60);
          puVar24[1] = *(undefined4 *)(lVar25 + 100);
          puVar24[2] = *(undefined4 *)(lVar25 + 0x68);
          puVar24[3] = *(undefined4 *)(lVar25 + 0x6c);
          puVar24[4] = *(undefined4 *)(lVar25 + 0x70);
          puVar24[5] = *(undefined4 *)(lVar25 + 0x74);
          puVar24[6] = *(undefined4 *)(lVar25 + 0x78);
          puVar24[7] = *(undefined4 *)(lVar25 + 0x7c);
          puVar24[8] = *(undefined4 *)(lVar25 + 0x80);
          puVar24[9] = *(undefined4 *)(lVar25 + 0x84);
          puVar24[10] = *(undefined4 *)(lVar25 + 0x88);
          puVar24[0xb] = *(undefined4 *)(lVar25 + 0x8c);
          puVar24[0xc] = *(undefined4 *)(lVar25 + 0x90);
          puVar24[0xd] = *(undefined4 *)(lVar25 + 0x94);
          puVar24[0xe] = *(undefined4 *)(lVar25 + 0x98);
          puVar24[0xf] = *(undefined4 *)(lVar25 + 0x9c);
          *(undefined8 *)(puVar24 + 0x4d) = *(undefined8 *)(lVar25 + 0xa0);
          puVar24[0x1c] = *(undefined4 *)(lVar25 + 0xd8);
          puVar24[0x1d] = *(undefined4 *)(lVar25 + 0xdc);
          puVar24[0x1e] = *(undefined4 *)(lVar25 + 0xe0);
          puVar24[0x1f] = *(undefined4 *)(lVar25 + 0xe4);
          puVar24[0x20] = *(undefined4 *)(lVar25 + 0xe8);
          puVar24[0x21] = *(undefined4 *)(lVar25 + 0xec);
          puVar24[0x22] = *(undefined4 *)(lVar25 + 0xf0);
          puVar24[0x23] = *(undefined4 *)(lVar25 + 0xf4);
          puVar24[0x24] = *(undefined4 *)(lVar25 + 0xf8);
          puVar24[0x25] = *(undefined4 *)(lVar25 + 0xfc);
          puVar24[0x26] = *(undefined4 *)(lVar25 + 0x100);
          puVar24[0x27] = *(undefined4 *)(lVar25 + 0x104);
          puVar24[0x52] = *(undefined4 *)(lVar25 + 0x18c);
          puVar24[0x10] = *(undefined4 *)(lVar25 + 0xa8);
          puVar24[0x11] = *(undefined4 *)(lVar25 + 0xac);
          puVar24[0x12] = *(undefined4 *)(lVar25 + 0xb0);
          puVar24[0x13] = *(undefined4 *)(lVar25 + 0xb4);
          puVar24[0x14] = *(undefined4 *)(lVar25 + 0xb8);
          puVar24[0x15] = *(undefined4 *)(lVar25 + 0xbc);
          puVar24[0x16] = *(undefined4 *)(lVar25 + 0xc0);
          puVar24[0x17] = *(undefined4 *)(lVar25 + 0xc4);
          puVar24[0x18] = *(undefined4 *)(lVar25 + 200);
          puVar24[0x19] = *(undefined4 *)(lVar25 + 0xcc);
          puVar24[0x1a] = *(undefined4 *)(lVar25 + 0xd0);
          puVar24[0x1b] = *(undefined4 *)(lVar25 + 0xd4);
          puVar24[0x3c] = *(undefined4 *)(lVar25 + 0x160);
          puVar24[0x3d] = *(undefined4 *)(lVar25 + 0x164);
          puVar24[0x3e] = *(undefined4 *)(lVar25 + 0x168);
          puVar24[0x3f] = *(undefined4 *)(lVar25 + 0x16c);
          puVar24[0x55] = *(undefined4 *)(lVar25 + 0x198);
          uVar10 = *(undefined8 *)(lVar25 + 0x188);
          *(undefined8 *)(puVar24 + 0x53) = *(undefined8 *)(lVar25 + 400);
          *(undefined8 *)(puVar24 + 0x51) = uVar10;
          puVar24[0x56] = *(undefined4 *)(lVar25 + 0x19c);
          iVar14 = *(int *)(lVar25 + 0x44);
          puVar24[0x4a] = iVar14;
          puVar24[0x4c] = *(undefined4 *)(lVar25 + 4);
          puVar24[0x4b] = *(undefined4 *)(lVar25 + 0x24);
          puVar24[0x4f] = *(undefined4 *)(lVar25 + 0x158);
          puVar24[0x2c] = *(undefined4 *)(lVar25 + 0x118);
          puVar24[0x2d] = *(undefined4 *)(lVar25 + 0x11c);
          puVar24[0x2e] = *(undefined4 *)(lVar25 + 0x120);
          puVar24[0x2f] = *(undefined4 *)(lVar25 + 0x124);
          puVar24[0x30] = *(undefined4 *)(lVar25 + 0x128);
          puVar24[0x31] = *(undefined4 *)(lVar25 + 300);
          puVar24[0x32] = *(undefined4 *)(lVar25 + 0x130);
          puVar24[0x33] = *(undefined4 *)(lVar25 + 0x134);
          puVar24[0x50] = *(undefined4 *)(lVar25 + 0x15c);
          if (iVar14 == 0) {
            *(undefined8 *)(puVar24 + 0x44) = 0;
            if (puVar24[0x4c] != 0) goto LAB_00f77cec;
LAB_00f77ea8:
            *(undefined8 *)(puVar24 + 0x48) = 0;
            if (puVar24[0x4b] != 0) goto LAB_00f77db8;
LAB_00f77eb4:
            *(undefined8 *)(puVar24 + 0x46) = 0;
          }
          else {
            lVar25 = (**(code **)(*(long *)param_2 + 0x38))(param_2,*(undefined8 *)(lVar25 + 0x50));
            *(long *)(puVar24 + 0x44) = lVar25;
            if (lVar25 != 0) {
              uVar5 = puVar24[0x4a];
              uVar16 = (ulong)uVar5;
              lVar25 = (**(code **)(*(long *)param_2 + 0x20))(param_2,0x10,uVar16);
              if (0 < (int)uVar5) {
                puVar13 = *(undefined4 **)(lVar25 + 8);
                puVar12 = *(undefined4 **)(*(long *)(*(long *)(this + 0x5e8) + uVar21 * 8) + 0x50);
                if ((uVar5 < 8) ||
                   ((puVar13 < puVar12 + uVar16 * 4 && (puVar12 < puVar13 + uVar16 * 4)))) {
                  uVar18 = 0;
                }
                else {
                  uVar18 = uVar16 & 0xfffffff8;
                  puVar15 = (undefined8 *)(puVar12 + 0x10);
                  puVar19 = (undefined8 *)(puVar13 + 0x10);
                  uVar20 = uVar18;
                  do {
                    uVar31 = puVar15[-7];
                    uVar30 = puVar15[-8];
                    uVar28 = puVar15[-5];
                    uVar10 = puVar15[-6];
                    uVar20 = uVar20 - 8;
                    puVar8 = puVar15 + -3;
                    uVar34 = puVar15[-4];
                    uVar33 = puVar15[-1];
                    uVar32 = puVar15[-2];
                    uVar38 = puVar15[1];
                    uVar37 = *puVar15;
                    uVar36 = puVar15[3];
                    uVar35 = puVar15[2];
                    uVar42 = puVar15[5];
                    uVar41 = puVar15[4];
                    uVar40 = puVar15[7];
                    uVar39 = puVar15[6];
                    puVar15 = puVar15 + 0x10;
                    puVar19[-3] = *puVar8;
                    puVar19[-4] = uVar34;
                    puVar19[-1] = uVar33;
                    puVar19[-2] = uVar32;
                    puVar19[-7] = uVar31;
                    puVar19[-8] = uVar30;
                    puVar19[-5] = uVar28;
                    puVar19[-6] = uVar10;
                    puVar19[5] = uVar42;
                    puVar19[4] = uVar41;
                    puVar19[7] = uVar40;
                    puVar19[6] = uVar39;
                    puVar19[1] = uVar38;
                    *puVar19 = uVar37;
                    puVar19[3] = uVar36;
                    puVar19[2] = uVar35;
                    puVar19 = puVar19 + 0x10;
                  } while (uVar20 != 0);
                  if (uVar18 == uVar16) goto LAB_00f77cbc;
                  puVar13 = puVar13 + uVar18 * 4;
                }
                lVar26 = uVar16 - uVar18;
                puVar12 = puVar12 + uVar18 * 4 + 2;
                do {
                  lVar26 = lVar26 + -1;
                  *puVar13 = puVar12[-2];
                  puVar13[1] = puVar12[-1];
                  puVar13[2] = *puVar12;
                  puVar1 = puVar12 + 1;
                  puVar12 = puVar12 + 4;
                  puVar13[3] = *puVar1;
                  puVar13 = puVar13 + 4;
                } while (lVar26 != 0);
              }
LAB_00f77cbc:
              (**(code **)(*(long *)param_2 + 0x28))
                        (param_2,lVar25,"btVector3FloatData",0x59415241,
                         *(undefined8 *)(*(long *)(*(long *)(this + 0x5e8) + uVar21 * 8) + 0x50));
            }
            if (puVar24[0x4c] == 0) goto LAB_00f77ea8;
LAB_00f77cec:
            lVar25 = (**(code **)(*(long *)param_2 + 0x38))
                               (param_2,*(undefined8 *)
                                         (*(long *)(*(long *)(this + 0x5e8) + uVar21 * 8) + 0x10));
            *(long *)(puVar24 + 0x48) = lVar25;
            if (lVar25 != 0) {
              uVar5 = puVar24[0x4c];
              uVar16 = (ulong)uVar5;
              lVar25 = (**(code **)(*(long *)param_2 + 0x20))(param_2,4,uVar16);
              if (0 < (int)uVar5) {
                puVar12 = *(undefined4 **)(lVar25 + 8);
                puVar13 = *(undefined4 **)(*(long *)(*(long *)(this + 0x5e8) + uVar21 * 8) + 0x10);
                if ((uVar5 < 8) || ((puVar12 < puVar13 + uVar16 && (puVar13 < puVar12 + uVar16)))) {
                  uVar18 = 0;
                }
                else {
                  uVar18 = uVar16 & 0xfffffff8;
                  puVar15 = (undefined8 *)(puVar13 + 4);
                  puVar19 = (undefined8 *)(puVar12 + 4);
                  uVar20 = uVar18;
                  do {
                    puVar8 = puVar15 + -1;
                    uVar10 = puVar15[-2];
                    uVar30 = puVar15[1];
                    uVar28 = *puVar15;
                    uVar20 = uVar20 - 8;
                    puVar15 = puVar15 + 4;
                    puVar19[-1] = *puVar8;
                    puVar19[-2] = uVar10;
                    puVar19[1] = uVar30;
                    *puVar19 = uVar28;
                    puVar19 = puVar19 + 4;
                  } while (uVar20 != 0);
                  if (uVar18 == uVar16) goto LAB_00f77d88;
                  puVar12 = puVar12 + uVar18;
                }
                lVar26 = uVar16 - uVar18;
                puVar13 = puVar13 + uVar18;
                do {
                  lVar26 = lVar26 + -1;
                  *puVar12 = *puVar13;
                  puVar12 = puVar12 + 1;
                  puVar13 = puVar13 + 1;
                } while (lVar26 != 0);
              }
LAB_00f77d88:
              (**(code **)(*(long *)param_2 + 0x28))
                        (param_2,lVar25,"float",0x59415241,
                         *(undefined8 *)(*(long *)(*(long *)(this + 0x5e8) + uVar21 * 8) + 0x10));
            }
            if (puVar24[0x4b] == 0) goto LAB_00f77eb4;
LAB_00f77db8:
            lVar25 = (**(code **)(*(long *)param_2 + 0x38))
                               (param_2,*(long *)(*(long *)(this + 0x5e8) + uVar21 * 8) + 0x20);
            *(long *)(puVar24 + 0x46) = lVar25;
            if (lVar25 != 0) {
              uVar5 = puVar24[0x4c];
              lVar25 = (**(code **)(*(long *)param_2 + 0x20))(param_2,4,(ulong)uVar5);
              if (0 < (int)uVar5) {
                uVar16 = 0;
                lVar26 = *(long *)(*(long *)(*(long *)(this + 0x5e8) + uVar21 * 8) + 0x30);
                puVar12 = *(undefined4 **)(lVar25 + 8);
                do {
                  lVar17 = *(long *)(lVar26 + uVar16 * 8);
                  iVar14 = (int)((ulong)lVar17 >> 0x20) + (int)lVar17;
                  uVar2 = iVar14 + (iVar14 * 0x8000 ^ 0xffffffffU);
                  uVar2 = (uVar2 ^ (int)uVar2 >> 10) * 9;
                  uVar2 = uVar2 ^ (int)uVar2 >> 6;
                  uVar2 = uVar2 + (uVar2 << 0xb ^ 0xffffffff);
                  lVar22 = (long)*(int *)(local_e0 +
                                         (long)(int)((uVar2 ^ (int)uVar2 >> 0x10) &
                                                    local_ac._4_4_ - 1U) * 4);
                  lVar11 = *(long *)(local_80 + lVar22 * 8);
                  while (lVar17 != lVar11) {
                    lVar22 = (long)*(int *)(local_c0 + lVar22 * 4);
                    lVar11 = *(long *)(local_80 + lVar22 * 8);
                  }
                  uVar16 = uVar16 + 1;
                  *puVar12 = *(undefined4 *)(local_a0 + lVar22 * 4);
                  puVar12 = puVar12 + 1;
                } while (uVar16 != uVar5);
              }
              (**(code **)(*(long *)param_2 + 0x28))
                        (param_2,lVar25,&DAT_004dbc25,0x59415241,
                         *(long *)(*(long *)(this + 0x5e8) + uVar21 * 8) + 0x20);
            }
          }
          uVar21 = uVar21 + 1;
          puVar24 = puVar24 + 0x5a;
        } while (uVar21 != uVar4);
      }
      (**(code **)(*(long *)param_2 + 0x28))
                (param_2,lVar9,"SoftBodyClusterData",0x59415241,**(undefined8 **)(this + 0x5e8));
    }
  }
  iVar14 = *(int *)(this + 0x454);
  *(int *)((long)param_1 + 0x174) = iVar14;
  if (iVar14 == 0) {
    *(undefined8 *)((long)param_1 + 0x150) = 0;
  }
  else {
    lVar9 = (**(code **)(*(long *)param_2 + 0x38))(param_2,*(undefined8 *)(this + 0x460));
    *(long *)((long)param_1 + 0x150) = lVar9;
    if (lVar9 != 0) {
      uVar4 = *(uint *)(this + 0x454);
      lVar9 = (**(code **)(*(long *)param_2 + 0x20))(param_2,0x70,(ulong)uVar4);
      if (0 < (int)uVar4) {
        lVar25 = 0;
        puVar15 = *(undefined8 **)(lVar9 + 8);
        do {
          uVar27 = (**(code **)(**(long **)(*(long *)(this + 0x460) + lVar25) + 0x28))();
          *(undefined4 *)(puVar15 + 0xd) = uVar27;
          lVar26 = *(long *)(this + 0x460);
          lVar22 = *(long *)(lVar26 + lVar25);
          *(undefined4 *)(puVar15 + 2) = *(undefined4 *)(lVar22 + 0x38);
          *(undefined4 *)((long)puVar15 + 0x14) = *(undefined4 *)(lVar22 + 0x3c);
          *(undefined4 *)(puVar15 + 3) = *(undefined4 *)(lVar22 + 0x40);
          *(undefined4 *)((long)puVar15 + 0x1c) = *(undefined4 *)(lVar22 + 0x44);
          *(undefined4 *)(puVar15 + 4) = *(undefined4 *)(lVar22 + 0x48);
          *(undefined4 *)((long)puVar15 + 0x24) = *(undefined4 *)(lVar22 + 0x4c);
          *(undefined4 *)(puVar15 + 5) = *(undefined4 *)(lVar22 + 0x50);
          *(undefined4 *)((long)puVar15 + 0x2c) = *(undefined4 *)(lVar22 + 0x54);
          puVar15[6] = *(undefined8 *)(lVar22 + 0x58);
          *(undefined4 *)(puVar15 + 7) = *(undefined4 *)(lVar22 + 0x60);
          bVar6 = *(byte *)(lVar22 + 0xb4);
          *puVar15 = 0;
          puVar15[1] = 0;
          *(uint *)((long)puVar15 + 0x3c) = (uint)bVar6;
          puVar15[9] = 0;
          puVar15[8] = 0;
          puVar15[0xb] = 0;
          puVar15[10] = 0;
          lVar26 = *(long *)(lVar26 + lVar25);
          if (*(long *)(lVar26 + 8) != 0) {
            *(undefined4 *)(puVar15 + 0xc) = 1;
            uVar10 = (**(code **)(*(long *)param_2 + 0x38))(param_2);
            *puVar15 = uVar10;
            lVar26 = *(long *)(*(long *)(this + 0x460) + lVar25);
          }
          if (*(long *)(lVar26 + 0x18) != 0) {
            *(undefined4 *)(puVar15 + 0xc) = 3;
            uVar10 = (**(code **)(*(long *)param_2 + 0x38))(param_2);
            *puVar15 = uVar10;
            lVar26 = *(long *)(*(long *)(this + 0x460) + lVar25);
          }
          if (*(long *)(lVar26 + 0x10) != 0) {
            *(undefined4 *)(puVar15 + 0xc) = 2;
            uVar10 = (**(code **)(*(long *)param_2 + 0x38))(param_2);
            *puVar15 = uVar10;
            lVar26 = *(long *)(*(long *)(this + 0x460) + lVar25);
          }
          if (*(long *)(lVar26 + 0x20) != 0) {
            *(undefined4 *)((long)puVar15 + 100) = 1;
            uVar10 = (**(code **)(*(long *)param_2 + 0x38))(param_2);
            puVar15[1] = uVar10;
            lVar26 = *(long *)(*(long *)(this + 0x460) + lVar25);
          }
          if (*(long *)(lVar26 + 0x30) != 0) {
            *(undefined4 *)((long)puVar15 + 100) = 3;
            uVar10 = (**(code **)(*(long *)param_2 + 0x38))(param_2);
            puVar15[1] = uVar10;
            lVar26 = *(long *)(*(long *)(this + 0x460) + lVar25);
          }
          if (*(long *)(lVar26 + 0x28) != 0) {
            *(undefined4 *)((long)puVar15 + 100) = 2;
            uVar10 = (**(code **)(*(long *)param_2 + 0x38))(param_2);
            puVar15[1] = uVar10;
          }
          puVar15 = puVar15 + 0xe;
          lVar25 = lVar25 + 8;
        } while ((ulong)uVar4 * 8 - lVar25 != 0);
      }
      (**(code **)(*(long *)param_2 + 0x28))
                (param_2,lVar9,"btSoftBodyJointData",0x59415241,*(undefined8 *)(this + 0x460));
    }
  }
  if ((local_80 != 0) && (local_78 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  local_80 = 0;
  local_8c = 0;
  local_78 = 1;
  if ((local_a0 != 0) && (local_98 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  local_98 = 1;
  local_a0 = 0;
  local_ac = 0;
  if ((local_c0 != 0) && (local_b8 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  local_c0 = 0;
  local_cc = 0;
  local_b8 = 1;
  if ((local_e0 != 0) && (local_d8 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  if (*(long *)(lVar7 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return "btSoftBodyFloatData";
}


