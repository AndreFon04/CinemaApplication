cmake_minimum_required(VERSION 3.25)
project(CinemaApplication)

set(CMAKE_CXX_STANDARD 17)

set(PROJECT_HEADERS_DIR
        ${PROJECT_SOURCE_DIR}/headers)
set(PROJECT_SOURCES_DIR
        ${PROJECT_SOURCE_DIR}/sources)


set(PROJECT_MOCK_DIR ${PROJECT_SOURCE_DIR}/mock)

include_directories(
        ${PROJECT_MOCK_DIR})
set(MOCK_SOURCE_FILES
        ${PROJECT_MOCK_DIR}/MockData.h
        ${PROJECT_MOCK_DIR}/MockData.cpp)


set(PROJECT_HEADERS_CONTROLLERS_DIR
        ${PROJECT_HEADERS_DIR}/controllers)
set(PROJECT_SOURCES_CONTROLLERS_DIR
        ${PROJECT_SOURCES_DIR}/controllers)

include_directories(
        ${PROJECT_HEADERS_CONTROLLERS_DIR}
        ${PROJECT_SOURCES_CONTROLLERS_DIR})
set(CONTROLLERS_SOURCE_FILES
        ${PROJECT_HEADERS_CONTROLLERS_DIR}/Controller.h
        ${PROJECT_SOURCES_CONTROLLERS_DIR}/Controller.cpp)


set(PROJECT_HEADERS_EXCEPTIONS_DIR
        ${PROJECT_HEADERS_DIR}/exceptions)
set(PROJECT_SOURCES_EXCEPTIONS_DIR
        ${PROJECT_SOURCES_DIR}/exceptions)

include_directories(
        ${PROJECT_HEADERS_EXCEPTIONS_DIR}
        ${PROJECT_SOURCES_EXCEPTIONS_DIR})

set(EXCEPTIONS_SOURCE_FILES
        ${PROJECT_HEADERS_EXCEPTIONS_DIR}/UserNotFoundException.h
        ${PROJECT_HEADERS_EXCEPTIONS_DIR}/InsufficientCashException.h
        ${PROJECT_HEADERS_EXCEPTIONS_DIR}/RoomAlreadyFullException.h
        ${PROJECT_HEADERS_EXCEPTIONS_DIR}/InvalidCreditCardException.h
        ${PROJECT_HEADERS_EXCEPTIONS_DIR}/SeatNoLongerAvailableException.h
        ${PROJECT_SOURCES_EXCEPTIONS_DIR}/SeatNoLongerAvailableException.cpp
        ${PROJECT_SOURCES_EXCEPTIONS_DIR}/InvalidCreditCardException.cpp
        ${PROJECT_SOURCES_EXCEPTIONS_DIR}/RoomAlreadyFullException.cpp
        ${PROJECT_SOURCES_EXCEPTIONS_DIR}/InsufficientCashException.cpp
        ${PROJECT_SOURCES_EXCEPTIONS_DIR}/UserNotFoundException.cpp)


set(PROJECT_HEADERS_MODEL_DIR
        ${PROJECT_HEADERS_DIR}/model)
set(PROJECT_SOURCES_MODEL_DIR
        ${PROJECT_SOURCES_DIR}/model)

include_directories(
        ${PROJECT_HEADERS_MODEL_DIR}
        ${PROJECT_SOURCES_MODEL_DIR})

set(MODEL_SOURCE_FILES

        ${PROJECT_SOURCES_MODEL_DIR}/User.cpp
        ${PROJECT_SOURCES_MODEL_DIR}/Seat.cpp
        ${PROJECT_SOURCES_MODEL_DIR}/Movie.cpp
        ${PROJECT_SOURCES_MODEL_DIR}/Showtime.cpp
        ${PROJECT_SOURCES_MODEL_DIR}/Booking.cpp
        ${PROJECT_SOURCES_MODEL_DIR}/PaymentDetails.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/Booking.h
        ${PROJECT_HEADERS_MODEL_DIR}/Movie.h
        ${PROJECT_HEADERS_MODEL_DIR}/Showtime.h
        ${PROJECT_HEADERS_MODEL_DIR}/PaymentDetails.h
        ${PROJECT_HEADERS_MODEL_DIR}/Seat.h
        ${PROJECT_HEADERS_MODEL_DIR}/User.h
        ${PROJECT_HEADERS_MODEL_DIR}/Cinema.h
        ${PROJECT_SOURCES_MODEL_DIR}/Cinema.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/UserContainer.h
        ${PROJECT_HEADERS_MODEL_DIR}/ShowtimeContainer.h
        ${PROJECT_HEADERS_MODEL_DIR}/MovieContainer.h
        ${PROJECT_SOURCES_MODEL_DIR}/MovieContainer.cpp
        ${PROJECT_SOURCES_MODEL_DIR}/UserContainer.cpp
        ${PROJECT_SOURCES_MODEL_DIR}/ShowtimeContainer.cpp)


set(PROJECT_HEADERS_VIEWS_DIR
        ${PROJECT_HEADERS_DIR}/views)
set(PROJECT_SOURCES_VIEWS_DIR
        ${PROJECT_SOURCES_DIR}/views)
include_directories(
        ${PROJECT_HEADERS_VIEWS_DIR}
        ${PROJECT_SOURCES_VIEWS_DIR})

set(VIEWS_SOURCE_FILES
    ${PROJECT_HEADERS_VIEWS_DIR}/Utils.h
    ${PROJECT_SOURCES_VIEWS_DIR}/Utils.cpp
    ${PROJECT_HEADERS_VIEWS_DIR}/View.h
    ${PROJECT_SOURCES_VIEWS_DIR}/View.cpp
    ${PROJECT_HEADERS_VIEWS_DIR}/WelcomeScreen.h
    ${PROJECT_HEADERS_VIEWS_DIR}/MovieListView.h
    ${PROJECT_HEADERS_VIEWS_DIR}/ShowTimeView.h
    ${PROJECT_HEADERS_VIEWS_DIR}/SeatSelectionView.h
    ${PROJECT_HEADERS_VIEWS_DIR}/PaymentView.h
    ${PROJECT_HEADERS_VIEWS_DIR}/ConfirmationView.h
    ${PROJECT_SOURCES_VIEWS_DIR}/Utils.cpp
    ${PROJECT_SOURCES_VIEWS_DIR}/PaymentView.cpp
    ${PROJECT_SOURCES_VIEWS_DIR}/Utils.cpp
    ${PROJECT_SOURCES_VIEWS_DIR}/ConfirmationView.cpp
    ${PROJECT_SOURCES_VIEWS_DIR}/Utils.cpp
    ${PROJECT_SOURCES_VIEWS_DIR}/WelcomeScreen.cpp
    ${PROJECT_SOURCES_VIEWS_DIR}/Utils.cpp
    ${PROJECT_SOURCES_VIEWS_DIR}/MovieListView.cpp
    ${PROJECT_SOURCES_VIEWS_DIR}/Utils.cpp
    ${PROJECT_SOURCES_VIEWS_DIR}/ShowTimeView.cpp)


set(SOURCE_FILES
        ${PROJECT_HEADERS_DIR}/CinemaOld.h
        ${PROJECT_SOURCES_DIR}/CinemaOld.cpp
        ${PROJECT_HEADERS_DIR}/Bilhete.h
        ${PROJECT_SOURCES_DIR}/Bilhete.cpp sources/exceptions/DuplicatedDataException.cpp headers/exceptions/DuplicatedDataException.h headers/model/BookingContainer.h sources/model/BookingContainer.cpp)

add_executable(
        CinemaApplication
        main.cpp
        ${SOURCE_FILES}
        ${VIEWS_SOURCE_FILES}
        ${MODEL_SOURCE_FILES}
        ${EXCEPTIONS_SOURCE_FILES}
        ${CONTROLLERS_SOURCE_FILES}
        ${MOCK_SOURCE_FILES})
