// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serialize
// Entry Point: 00f584dc
// Size: 576 bytes
// Signature: undefined __thiscall serialize(btBvhTriangleMeshShape * this, void * param_1, btSerializer * param_2)


/* btBvhTriangleMeshShape::serialize(void*, btSerializer*) const */

char * __thiscall
btBvhTriangleMeshShape::serialize(btBvhTriangleMeshShape *this,void *param_1,btSerializer *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar3 = (**(code **)(*(long *)param_2 + 0x50))(param_2,this);
  lVar4 = (**(code **)(*(long *)param_2 + 0x38))(param_2,uVar3);
  *(long *)param_1 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)param_2 + 0x60))(param_2,uVar3);
  }
  plVar5 = *(long **)(this + 0x40);
  lVar4 = *plVar5;
  *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)(this + 8);
  (**(code **)(lVar4 + 0x70))(plVar5,(long)param_1 + 0x10,param_2);
  lVar4 = *(long *)(this + 0x48);
  *(undefined4 *)((long)param_1 + 0x48) = *(undefined4 *)(this + 0x1c);
  if ((lVar4 == 0) || (uVar6 = (**(code **)(*(long *)param_2 + 0x68))(param_2), (uVar6 & 1) != 0)) {
    *(undefined8 *)((long)param_1 + 0x30) = 0;
    *(undefined8 *)((long)param_1 + 0x38) = 0;
    lVar4 = *(long *)(this + 0x50);
  }
  else {
    lVar4 = (**(code **)(*(long *)param_2 + 0x30))(param_2,*(undefined8 *)(this + 0x48));
    if (lVar4 == 0) {
      uVar3 = (**(code **)(*(long *)param_2 + 0x38))(param_2,*(undefined8 *)(this + 0x48));
      plVar5 = *(long **)(this + 0x48);
      *(undefined8 *)((long)param_1 + 0x30) = uVar3;
      *(undefined8 *)((long)param_1 + 0x38) = 0;
      iVar2 = (**(code **)(*plVar5 + 0x18))(plVar5);
      lVar4 = (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)iVar2,1);
      uVar3 = (**(code **)(**(long **)(this + 0x48) + 0x20))
                        (*(long **)(this + 0x48),*(undefined8 *)(lVar4 + 8),param_2);
      (**(code **)(*(long *)param_2 + 0x28))
                (param_2,lVar4,uVar3,0x48564251,*(undefined8 *)(this + 0x48));
      lVar4 = *(long *)(this + 0x50);
    }
    else {
      *(long *)((long)param_1 + 0x30) = lVar4;
      *(undefined8 *)((long)param_1 + 0x38) = 0;
      lVar4 = *(long *)(this + 0x50);
    }
  }
  if ((lVar4 == 0) ||
     (uVar1 = (**(code **)(*(long *)param_2 + 0x68))(param_2), (uVar1 >> 1 & 1) != 0)) {
    *(undefined8 *)((long)param_1 + 0x40) = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)param_2 + 0x30))(param_2,*(undefined8 *)(this + 0x50));
    if (lVar4 == 0) {
      uVar3 = (**(code **)(*(long *)param_2 + 0x38))(param_2,*(undefined8 *)(this + 0x50));
      plVar5 = *(long **)(this + 0x50);
      *(undefined8 *)((long)param_1 + 0x40) = uVar3;
      iVar2 = (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar4 = (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)iVar2,1);
      uVar3 = (**(code **)(**(long **)(this + 0x50) + 0x18))
                        (*(long **)(this + 0x50),*(undefined8 *)(lVar4 + 8),param_2);
      (**(code **)(*(long *)param_2 + 0x28))
                (param_2,lVar4,uVar3,0x50414d54,*(undefined8 *)(this + 0x50));
    }
    else {
      *(long *)((long)param_1 + 0x40) = lVar4;
    }
  }
  return "btTriangleMeshShapeData";
}


