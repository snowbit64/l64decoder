// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadI3DFile
// Entry Point: 008fd000
// Size: 352 bytes
// Signature: undefined __cdecl loadI3DFile(char * param_1, bool param_2, bool param_3, MeshSplitFileState * param_4, bool param_5, bool * param_6, bool param_7, FailedReason * param_8)


/* I3DLoadUtil::loadI3DFile(char const*, bool, bool, MeshSplitFileState const*, bool, bool&, bool,
   I3DLoad::FailedReason&) */

long * I3DLoadUtil::loadI3DFile
                 (char *param_1,bool param_2,bool param_3,MeshSplitFileState *param_4,bool param_5,
                 bool *param_6,bool param_7,FailedReason *param_8)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  __tree_node **local_338;
  __tree_node *local_330;
  undefined8 uStack_328;
  bool local_31c [4];
  I3DLoad aIStack_318 [672];
  undefined local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  RenderDeviceManager::getInstance();
  plVar3 = (long *)RenderDeviceManager::getCurrentRenderDevice();
  uVar4 = (**(code **)(*plVar3 + 0xa8))();
  local_31c[0] = false;
  I3DLoad::I3DLoad(aIStack_318,local_31c);
  local_330 = (__tree_node *)0x0;
  uStack_328 = 0;
  local_338 = &local_330;
                    /* try { // try from 008fd084 to 008fd093 has its CatchHandler @ 008fd160 */
  I3DLoad::setResolveReferences(aIStack_318,param_7,(map *)&local_338);
                    /* try { // try from 008fd094 to 008fd0c7 has its CatchHandler @ 008fd168 */
  iVar2 = I3DLoad::loadI3DFileAsync
                    (aIStack_318,param_1,1,param_5,param_2,param_3,param_4,
                     (StreamQueueCallback *)0x0,(void *)0x0,(LOAD_PROGRESS *)0x0);
  ProceduralPlacementManager::getInstance();
  ProceduralPlacementManager::removeDuplicateObjectAndRules();
  *param_6 = (bool)local_78;
                    /* try { // try from 008fd0d0 to 008fd0f3 has its CatchHandler @ 008fd164 */
  plVar3 = (long *)I3DLoad::getSceneGraphRoot();
  if ((uVar4 & 1) != 0) {
    RenderDeviceManager::getInstance();
    plVar5 = (long *)RenderDeviceManager::getCurrentRenderDevice();
    (**(code **)(*plVar5 + 0xb0))();
  }
  if ((iVar2 != 0) && (plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 8))(plVar3);
    plVar3 = (long *)0x0;
  }
  *(int *)param_8 = iVar2;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<TransformGroup*,bool>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<TransformGroup*,bool>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<TransformGroup*,bool>>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<TransformGroup*,bool>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<TransformGroup*,bool>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<TransformGroup*,bool>>>>
             *)&local_338,local_330);
  I3DLoad::~I3DLoad(aIStack_318);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


