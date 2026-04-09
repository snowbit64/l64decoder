// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ToStringSpvBuiltIn
// Entry Point: 00ae1568
// Size: 1296 bytes
// Signature: undefined __cdecl ToStringSpvBuiltIn(SpvBuiltIn_ param_1)


/* ToStringSpvBuiltIn(SpvBuiltIn_) */

void ToStringSpvBuiltIn(SpvBuiltIn_ param_1)

{
  long lVar1;
  basic_ostream *pbVar2;
  char *pcVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
  abStack_160 [16];
  basic_ostream abStack_150 [264];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  switch(param_1) {
  case 0:
    pcVar3 = "Position";
    break;
  case 1:
    pcVar3 = "PointSize";
    break;
  case 2:
  case 0x15:
  case 0x23:
switchD_00ae15c0_caseD_2:
    FUN_00ae1a8c(abStack_160,0x18);
                    /* try { // try from 00ae1a30 to 00ae1a67 has its CatchHandler @ 00ae1a78 */
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (abStack_150,"??? (",5);
    pbVar2 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,param_1);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,")",1);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    std::__ndk1::
    basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    ~basic_stringstream(abStack_160);
    goto LAB_00ae19f4;
  case 3:
    pcVar3 = "ClipDistance";
    break;
  case 4:
    pcVar3 = "CullDistance";
    break;
  case 5:
    pcVar3 = "VertexId";
    break;
  case 6:
    pcVar3 = "InstanceId";
    break;
  case 7:
    pcVar3 = "PrimitiveId";
    break;
  case 8:
    pcVar3 = "InvocationId";
    break;
  case 9:
    pcVar3 = "Layer";
    break;
  case 10:
    pcVar3 = "ViewportIndex";
    break;
  case 0xb:
    pcVar3 = "TessLevelOuter";
    break;
  case 0xc:
    pcVar3 = "TessLevelInner";
    break;
  case 0xd:
    pcVar3 = "TessCoord";
    break;
  case 0xe:
    pcVar3 = "PatchVertices";
    break;
  case 0xf:
    pcVar3 = "FragCoord";
    break;
  case 0x10:
    pcVar3 = "PointCoord";
    break;
  case 0x11:
    pcVar3 = "FrontFacing";
    break;
  case 0x12:
    pcVar3 = "SampleId";
    break;
  case 0x13:
    pcVar3 = "SamplePosition";
    break;
  case 0x14:
    pcVar3 = "SampleMask";
    break;
  case 0x16:
    pcVar3 = "FragDepth";
    break;
  case 0x17:
    pcVar3 = "HelperInvocation";
    break;
  case 0x18:
    pcVar3 = "NumWorkgroups";
    break;
  case 0x19:
    pcVar3 = "WorkgroupSize";
    break;
  case 0x1a:
    pcVar3 = "WorkgroupId";
    break;
  case 0x1b:
    pcVar3 = "LocalInvocationId";
    break;
  case 0x1c:
    pcVar3 = "GlobalInvocationId";
    break;
  case 0x1d:
    pcVar3 = "LocalInvocationIndex";
    break;
  case 0x1e:
    pcVar3 = "WorkDim";
    break;
  case 0x1f:
    pcVar3 = "GlobalSize";
    break;
  case 0x20:
    pcVar3 = "EnqueuedWorkgroupSize";
    break;
  case 0x21:
    pcVar3 = "GlobalOffset";
    break;
  case 0x22:
    pcVar3 = "GlobalLinearId";
    break;
  case 0x24:
    pcVar3 = "SubgroupSize";
    break;
  case 0x25:
    pcVar3 = "SubgroupMaxSize";
    break;
  case 0x26:
    pcVar3 = "NumSubgroups";
    break;
  case 0x27:
    pcVar3 = "NumEnqueuedSubgroups";
    break;
  case 0x28:
    pcVar3 = "SubgroupId";
    break;
  case 0x29:
    pcVar3 = "SubgroupLocalInvocationId";
    break;
  case 0x2a:
    pcVar3 = "VertexIndex";
    break;
  case 0x2b:
    pcVar3 = "InstanceIndex";
    break;
  default:
    switch(param_1) {
    case 0x1485:
      pcVar3 = "ViewportMaskNV";
      break;
    case 0x1486:
    case 0x1487:
    case 0x1488:
    case 0x148b:
    case 0x148c:
    case 0x148f:
    case 0x1490:
    case 0x1491:
    case 0x1492:
    case 0x1493:
    case 0x1494:
    case 0x1495:
    case 0x1496:
    case 0x1497:
    case 0x1498:
    case 0x1499:
    case 0x149a:
    case 0x149b:
    case 0x149c:
    case 0x149d:
    case 0x149e:
    case 0x149f:
    case 0x14a0:
    case 0x14a1:
    case 0x14a2:
    case 0x14a3:
    case 0x14a4:
    case 0x14a5:
    case 0x14a6:
    case 0x14a7:
    case 0x14a8:
    case 0x14a9:
    case 0x14aa:
    case 0x14ab:
    case 0x14ac:
    case 0x14ad:
    case 0x14ae:
    case 0x14af:
    case 0x14b0:
    case 0x14b1:
    case 0x14b2:
    case 0x14b3:
    case 0x14b4:
    case 0x14b5:
    case 0x14b6:
    case 0x14b7:
    case 0x14b8:
    case 0x14b9:
    case 0x14ba:
    case 0x14bb:
    case 0x14bc:
    case 0x14bd:
    case 0x14be:
    case 0x14bf:
    case 0x14c0:
    case 0x14c1:
    case 0x14c2:
    case 0x14c3:
    case 0x14c4:
    case 0x14c5:
    case 0x14c6:
    case 0x14d0:
    case 0x14d1:
    case 0x14d6:
    case 0x14d7:
    case 0x14d8:
    case 0x14d9:
    case 0x14da:
    case 0x14db:
    case 0x14dc:
    case 0x14dd:
    case 0x14de:
    case 0x14df:
    case 0x14e0:
    case 0x14e1:
    case 0x14e2:
    case 0x14e3:
    case 0x14e4:
    case 0x14e5:
    case 0x14e6:
      goto switchD_00ae15c0_caseD_2;
    case 0x1489:
      pcVar3 = "SecondaryPositionNV";
      break;
    case 0x148a:
      pcVar3 = "SecondaryViewportMaskNV";
      break;
    case 0x148d:
      pcVar3 = "PositionPerViewNV";
      break;
    case 0x148e:
      pcVar3 = "ViewportMaskPerViewNV";
      break;
    case 0x14c7:
      pcVar3 = "InLaunchIdKHR";
      break;
    case 0x14c8:
      pcVar3 = "InLaunchSizeKHR";
      break;
    case 0x14c9:
      pcVar3 = "InWorldRayOriginKHR";
      break;
    case 0x14ca:
      pcVar3 = "InWorldRayDirectionKHR";
      break;
    case 0x14cb:
      pcVar3 = "InObjectRayOriginKHR";
      break;
    case 0x14cc:
      pcVar3 = "InObjectRayDirectionKHR";
      break;
    case 0x14cd:
      pcVar3 = "InRayTminKHR";
      break;
    case 0x14ce:
      pcVar3 = "InRayTmaxKHR";
      break;
    case 0x14cf:
      pcVar3 = "InInstanceCustomIndexKHR";
      break;
    case 0x14d2:
      pcVar3 = "InObjectToWorldKHR";
      break;
    case 0x14d3:
      pcVar3 = "InWorldToObjectKHR";
      break;
    case 0x14d4:
      pcVar3 = "InHitTNV";
      break;
    case 0x14d5:
      pcVar3 = "InHitKindKHR";
      break;
    case 0x14e7:
      pcVar3 = "InIncomingRayFlagsKHR";
      break;
    case 0x14e8:
      pcVar3 = "InRayGeometryIndexKHR";
      break;
    default:
      switch(param_1) {
      case 0x1140:
        pcVar3 = "SubgroupEqMaskKHR";
        break;
      case 0x1141:
        pcVar3 = "SubgroupGeMaskKHR";
        break;
      case 0x1142:
        pcVar3 = "SubgroupGtMaskKHR";
        break;
      case 0x1143:
        pcVar3 = "SubgroupLeMaskKHR";
        break;
      case 0x1144:
        pcVar3 = "SubgroupLtMaskKHR";
        break;
      case 0x1145:
      case 0x1146:
      case 0x1147:
      case 0x114b:
      case 0x114c:
      case 0x114d:
      case 0x114e:
      case 0x114f:
      case 0x1150:
      case 0x1151:
      case 0x1152:
      case 0x1153:
      case 0x1154:
      case 0x1155:
      case 0x1157:
        goto switchD_00ae15c0_caseD_2;
      case 0x1148:
        pcVar3 = "BaseVertex";
        break;
      case 0x1149:
        pcVar3 = "BaseInstance";
        break;
      case 0x114a:
        pcVar3 = "DrawIndex";
        break;
      case 0x1156:
        pcVar3 = "DeviceIndex";
        break;
      case 0x1158:
        pcVar3 = "ViewIndex";
        break;
      default:
        switch(param_1) {
        case 0x1380:
          pcVar3 = "BaryCoordNoPerspAMD";
          break;
        case 0x1381:
          pcVar3 = "BaryCoordNoPerspCentroidAMD";
          break;
        case 0x1382:
          pcVar3 = "BaryCoordNoPerspSampleAMD";
          break;
        case 0x1383:
          pcVar3 = "BaryCoordSmoothAMD";
          break;
        case 0x1384:
          pcVar3 = "BaryCoordSmoothCentroidAMD";
          break;
        case 0x1385:
          pcVar3 = "BaryCoordSmoothSampleAMD";
          break;
        case 0x1386:
          pcVar3 = "BaryCoordPullModelAMD";
          break;
        default:
          goto switchD_00ae15c0_caseD_2;
        case 0x1396:
          pcVar3 = "FragStencilRefEXT";
        }
      }
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(in_x8,pcVar3);
LAB_00ae19f4:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


