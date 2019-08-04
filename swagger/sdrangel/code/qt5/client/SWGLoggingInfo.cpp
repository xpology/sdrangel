/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 4.11.6
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGLoggingInfo.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGLoggingInfo::SWGLoggingInfo(QString* json) {
    init();
    this->fromJson(*json);
}

SWGLoggingInfo::SWGLoggingInfo() {
    console_level = nullptr;
    m_console_level_isSet = false;
    file_level = nullptr;
    m_file_level_isSet = false;
    dump_to_file = 0;
    m_dump_to_file_isSet = false;
    file_name = nullptr;
    m_file_name_isSet = false;
}

SWGLoggingInfo::~SWGLoggingInfo() {
    this->cleanup();
}

void
SWGLoggingInfo::init() {
    console_level = new QString("");
    m_console_level_isSet = false;
    file_level = new QString("");
    m_file_level_isSet = false;
    dump_to_file = 0;
    m_dump_to_file_isSet = false;
    file_name = new QString("");
    m_file_name_isSet = false;
}

void
SWGLoggingInfo::cleanup() {
    if(console_level != nullptr) { 
        delete console_level;
    }
    if(file_level != nullptr) { 
        delete file_level;
    }

    if(file_name != nullptr) { 
        delete file_name;
    }
}

SWGLoggingInfo*
SWGLoggingInfo::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGLoggingInfo::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&console_level, pJson["consoleLevel"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&file_level, pJson["fileLevel"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&dump_to_file, pJson["dumpToFile"], "qint32", "");
    
    ::SWGSDRangel::setValue(&file_name, pJson["fileName"], "QString", "QString");
    
}

QString
SWGLoggingInfo::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGLoggingInfo::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(console_level != nullptr && *console_level != QString("")){
        toJsonValue(QString("consoleLevel"), console_level, obj, QString("QString"));
    }
    if(file_level != nullptr && *file_level != QString("")){
        toJsonValue(QString("fileLevel"), file_level, obj, QString("QString"));
    }
    if(m_dump_to_file_isSet){
        obj->insert("dumpToFile", QJsonValue(dump_to_file));
    }
    if(file_name != nullptr && *file_name != QString("")){
        toJsonValue(QString("fileName"), file_name, obj, QString("QString"));
    }

    return obj;
}

QString*
SWGLoggingInfo::getConsoleLevel() {
    return console_level;
}
void
SWGLoggingInfo::setConsoleLevel(QString* console_level) {
    this->console_level = console_level;
    this->m_console_level_isSet = true;
}

QString*
SWGLoggingInfo::getFileLevel() {
    return file_level;
}
void
SWGLoggingInfo::setFileLevel(QString* file_level) {
    this->file_level = file_level;
    this->m_file_level_isSet = true;
}

qint32
SWGLoggingInfo::getDumpToFile() {
    return dump_to_file;
}
void
SWGLoggingInfo::setDumpToFile(qint32 dump_to_file) {
    this->dump_to_file = dump_to_file;
    this->m_dump_to_file_isSet = true;
}

QString*
SWGLoggingInfo::getFileName() {
    return file_name;
}
void
SWGLoggingInfo::setFileName(QString* file_name) {
    this->file_name = file_name;
    this->m_file_name_isSet = true;
}


bool
SWGLoggingInfo::isSet(){
    bool isObjectUpdated = false;
    do{
        if(console_level && *console_level != QString("")){
            isObjectUpdated = true; break;
        }
        if(file_level && *file_level != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_dump_to_file_isSet){
            isObjectUpdated = true; break;
        }
        if(file_name && *file_name != QString("")){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

