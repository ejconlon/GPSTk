// This file is used in building the swig bindings of the GPSTk and is not really
// intended to be used by C++ code directly

#ifndef GPSTK_SWIG_HPP
#define GPSTK_SWIG_HPP

// time:
#include "TimeSystem.hpp"
#include "TimeTag.hpp"
#include "TimeConstants.hpp"
#include "TimeConverters.hpp"
#include "Week.hpp"
#include "WeekSecond.hpp"
#include "UnixTime.hpp"
#include "ANSITime.hpp"
#include "CivilTime.hpp"
#include "MathBase.hpp"
#include "CommonTime.hpp"
#include "Exception.hpp"
#include "GPSZcount.hpp"
#include "GPSWeek.hpp"
#include "GPSWeekSecond.hpp"
#include "GPSWeekZcount.hpp"
#include "JulianDate.hpp"
#include "BDSWeekSecond.hpp"
#include "GALWeekSecond.hpp"
#include "QZSWeekSecond.hpp"
#include "MJD.hpp"
#include "SystemTime.hpp"
#include "TimeString.hpp"
#include "YDSTime.hpp"
#include "TimeSystemCorr.hpp"

// general files:
#include "StringUtils.hpp"
#include "GNSSconstants.hpp"
#include "gps_constants.hpp"
#include "SatID.hpp"
#include "ObsIDInitializer.hpp"
#include "ObsID.hpp"
#include "Triple.hpp"
#include "ReferenceFrame.hpp"
#include "EllipsoidModel.hpp"
#include "Xvt.hpp"
#include "StringUtils.hpp"
#include "Position.hpp"
#include "Xv.hpp"
#include "convhelp.hpp"
#include "VectorBase.hpp"
#include "Vector.hpp"
#include "Antenna.hpp"
#include "DataStatus.hpp"

// more specific almanac/ephemeris files:
#include "AstronomicalFunctions.hpp"
#include "XvtStore.hpp"
#include "PZ90Ellipsoid.hpp"
#include "WGS84Ellipsoid.hpp"
#include "gpstkplatform.h"
#include "FFStreamError.hpp"
#include "FileStore.hpp"
#include "FFData.hpp"
#include "EngNav.hpp"
#include "YumaBase.hpp"
#include "FFStream.hpp"
#include "FFTextStream.hpp"
#include "AlmOrbit.hpp"
#include "YumaHeader.hpp"
#include "EngAlmanac.hpp"
#include "OrbElem.hpp"
#include "OrbElemStore.hpp"
#include "YumaStream.hpp"
#include "YumaData.hpp"
#include "GPSAlmanacStore.hpp"
#include "YumaAlmanacStore.hpp"
#include "SVNumXRef.hpp"
#include "RinexSatID.hpp"
#include "GPS_URA.hpp"
#include "BrcClockCorrection.hpp"
#include "BrcKeplerOrbit.hpp"
#include "EphemerisRange.hpp"
// #include "EphReader.hpp"

// Ephemeris:
#include "OrbitEph.hpp"
#include "BDSEphemeris.hpp"
#include "EngEphemeris.hpp"
#include "GalEphemeris.hpp"
#include "GloEphemeris.hpp"
#include "GPSEphemeris.hpp"
#include "QZSEphemeris.hpp"

// RINEX format:
#include "RinexSatID.hpp"
#include "RinexObsBase.hpp"
#include "RinexObsHeader.hpp"
#include "RinexObsData.hpp"
#include "RinexObsID.hpp"
#include "RinexObsStream.hpp"
#include "RinexNavBase.hpp"
#include "RinexNavHeader.hpp"
#include "RinexNavStream.hpp"
#include "RinexNavData.hpp"
#include "RinexMetBase.hpp"
#include "RinexMetHeader.hpp"
#include "RinexMetStream.hpp"
#include "RinexMetData.hpp"
#include "Rinex3NavBase.hpp"
#include "Rinex3NavHeader.hpp"
#include "Rinex3NavStream.hpp"
#include "Rinex3NavData.hpp"
#include "OrbElemRinex.hpp"
#include "Rinex3ClockBase.hpp"
#include "Rinex3ObsBase.hpp"
#include "Rinex3ObsHeader.hpp"
#include "Rinex3ObsData.hpp"
#include "Rinex3ObsStream.hpp"
#include "Rinex3ClockHeader.hpp"
#include "Rinex3ClockData.hpp"
#include "Rinex3ClockStream.hpp"
#include "Rinex3EphemerisStore.hpp"

// Ephemeris stores:
#include "OrbitEphStore.hpp"
#include "BDSEphemerisStore.hpp"
#include "GalEphemerisStore.hpp"
#include "GloEphemerisStore.hpp"
#include "GPSEphemerisStore.hpp"
#include "QZSEphemerisStore.hpp"
#include "RinexEphemerisStore.hpp"

// SP3 format:
#include "TabularSatStore.hpp"
#include "ClockSatStore.hpp"
#include "SP3Base.hpp"
#include "SP3SatID.hpp"
#include "SP3Header.hpp"
#include "SP3Data.hpp"
#include "SP3Stream.hpp"
#include "PositionSatStore.hpp"
#include "SP3EphemerisStore.hpp"
#include "RinexUtilities.hpp"

// SEM format:
#include "SEMBase.hpp"
#include "SEMHeader.hpp"
#include "SEMStream.hpp"
#include "SEMData.hpp"
#include "SEMAlmanacStore.hpp"

#include "Matrix.hpp"
#include "Bancroft.hpp"
#include "ValidType.hpp"
#include "ObsEpochMap.hpp"
#include "WxObsMap.hpp"
#include "TropModel.hpp"
#include "CheckPRData.hpp"
#include "PRSolution2.hpp"
#include "ExtractData.hpp"
#include "Expression.hpp"

#include "FFBinaryStream.hpp"

// Positioning/Tides
#include "MoonPosition.hpp"
#include "SunPosition.hpp"
#include "PoleTides.hpp"
#include "SolidTides.hpp"

// Geomatics:
#include "SunEarthSatGeometry.hpp"

#endif
